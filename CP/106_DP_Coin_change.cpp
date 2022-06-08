#include <bits/stdc++.h>
using namespace std;

/*
you are given n diffrent types of coins, and a amount.
find the minimum no. of coin to complete the amount.
if no such combination of coins exists that can complete the ammont print -1.
NOTE :- each diffrent type of coin is infinite in numbers.

********* INPUT  *********
3
3
1 2 5
11
1
2
3
1
1
0
************************
*/

const int N = 1e4+5;
int dp[N];
int ct=0;

int func(int amount, vector<int> &coins){
    if(amount==0) return 0;
    if(dp[amount] != -1) return dp[amount];     ///

    int ans = INT_MAX;
    for(int coin : coins){
        if(amount - coin>=0){
            ans = min(ans, func(amount - coin, coins) + 1);
        }
    }

    return dp[amount]=ans;    ///

}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        memset(dp, -1, sizeof(dp) );
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        } 
        int sum; cin>>sum;

        int cc = func(sum, v);
        if(cc<0 || cc==INT_MAX){cout<<-1;}
        else{cout<<cc;}
        cout<<"\n";

    }
}