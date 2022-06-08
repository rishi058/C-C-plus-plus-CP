#include <bits/stdc++.h>
using namespace std;

/*
N stones are there(1 to n) a frog is initally is at stone 1, he can jump to the next or
second next stone at a time, every jump costs ( |Hj - Hi| while jumoing from i to j) -- (h1,h2...hN will be given)..
find the minimum cost to reach n...

**********  APPROACH  *********
USE TOP TO BOTTOM Approach..
START FROM N TAKE 2 KIND OF STEPS AND RETURN ITS MIN..AND ADD TO IT IN SUM SO ON...

YOU CAN ALSO DO IT WITHOUT DP & BRUTE FORCE RECURSION...
YOU CAN ALSO TRY ITERATIVE METHOD...
IN DIFFRENT CASES DIFFRENT METHOD ARE USED WHICH IS MORE SUITABLE..
*/

const int N = 1e6+7;
int h[N];
int dp[N];

int func(int i){
    if(i==0) { return 0; }
    if(dp[i] != -1) { return dp[i]; }
    int cost = INT_MAX;

    //way 1..
    cost = min(cost, func(i-1) + abs(h[i] - h[i-1]));

    //way 2..
    if(i>1){
        cost = min(cost, func(i-2) + abs(h[i] - h[i-2]));
    }

    return dp[i]=cost;
}


int main()
{
    int t; cin>>t;
    while(t--){
        memset(dp, -1, sizeof(dp));
        int n; cin>>n;
        for(int i=0; i<n; i++){
            cin>>h[i];
        }
        cout<<func(n-1)<<"\n";
    }

}
/*
*********  INPUT  **********
2
4
10 30 40 20
2 
10 10
********  OUTPUT  **********
30
0
*/