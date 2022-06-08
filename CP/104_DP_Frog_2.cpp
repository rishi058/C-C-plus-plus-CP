#include <bits/stdc++.h>
using namespace std;

/*
N stones are there(1 to n) a frog is initally is at stone 1, he can jump to i+1 or i+2 or i+3 or .... i+k (k is given in que)
every jump costs ( |Hj - Hi| while jumping from i to j) -- (h1,h2...hN will be given)..
find the minimum cost to reach n...

**********  APPROACH  *********

*/

const int N = 1e6+7;
int h[N];
int dp[N];
int k;

int func(int i){
    if(i==0) { return 0; }
    if(dp[i] != -1) { return dp[i]; }
    int cost = INT_MAX;

    // k ways..
    for(int j = 1; j<=k; j++ ){ 
        if(i-j >= 0)
        cost = min(cost, func(i-j) + abs(h[i] - h[i-j]));
    }
    
    return dp[i]=cost;
}

int main()
{
    int t; cin>>t;
    while(t--){
        memset(dp, -1, sizeof(dp));
        int n; cin>>n>>k;
        for(int i=0; i<n; i++){
            cin>>h[i];
        }
        cout<<func(n-1)<<"\n";
    }

}
/*
*********  INPUT  **********
2
5 3
10 30 40 50 20
3 1
10 20 10
********  OUTPUT  **********
30
20
*/