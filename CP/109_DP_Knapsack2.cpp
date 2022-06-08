#include <bits/stdc++.h>
using namespace std;

typedef long long ll ;

/*
0 1 KNAPSACK -->

There are N items 1 to N, each item has weigth Wi & Price Vi.
you have to carry some of the N items in a knapsack, the capacity of the Knapsack is W,
Find the max Price you can fill the Knapsack with....

1 <= N <= 100
1 <= W <= 10^5
1 <= Wi <= W
1 <= Vi <= 10^9

NOTE :- WE CAN'T TAKE A SINGLE ITEM TWICE....

***************  APPROACH  **************
LIKE GENERARING SUBSET PROBLEM -->
CHOOSE OR NOT INDEX N-1, CHOOSE OR NOT INDEX N-2, .....UPTO WHEN BAG IS FULL OR NO ITEMS IS LEFT..
AT EVERY STEP STORE MAX OF VAL OBTAINED BY CHOOSING A INDEX....
[Draw recursion tree]


*******  INPUT  *******
3 8
3 30
4 50
5 60

*/ 

const ll N = 1e6+7;
ll wt[N];
ll val[N];                  // Prices...
ll dp[105][100005];         // [no. of items < 101][max-wt < 100005]

ll func(ll index, ll wt_left){
    if( wt_left == 0 || index < 0 ) { return 0; }

    if( dp[index][wt_left] != -1 ) { return dp[index][wt_left]; }   ///
 
    ll ans = func(index-1, wt_left);     // don't choose item at index 

    if(wt_left - wt[index] >= 0)
    ans = max(ans, func(index-1, wt_left - wt[index]) + val[index]);     // choose item at index

    return dp[index][wt_left] = ans;
}

// here value(prices) array isn't the part of recursion , only weigth and index is stored

int main()
{
    memset(dp, -1, sizeof(dp));
    ll n, w;
    cin>>n>>w;
    for(ll i=0; i<n; i++){
        cin>>wt[i]>>val[i];
    }

    cout<<func(n-1, w);
}