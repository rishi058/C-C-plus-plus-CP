#include <bits/stdc++.h>
using namespace std;

typedef long long ll ;

/*
0 1 KNAPSACK -->

There are N items 1 to N, each item has weigth Wi & Price Vi.
you have to carry some of the N items in a knapsack, the capacity of the Knapsack is W,
Find the max Price you can fill the Knapsack with....

1 <= N <= 100
1 <= W <= 10^9
1 <= Wi <= W
1 <= Vi <= 10^3

***************  APPROACH  **************
UNLIKE PREV PROBLEM HERE WE CAN'T TAKE WEIGHT IN RECURSION OR DP AS ITS CONSTRAINTS ARE LARGE
IT WILL INCREASE TIME & SPACE COMPLEXITY ..
SO_WE WILL RATHER USE VALUE(PRICES) IN CONSIDERATION...

we should calculate all weight and its equivalent Prices decreasing order.., and iterate upto when given weigth 
is less the or equal to given weigth 

*******  INPUT  *******
3 8
3 30
4 50
5 60

*/ 

const ll N = 1e6+7;
ll wt[N];
ll val[N];                  // Prices...
ll dp[105][100005];         // [no. of items < 101][Price < 100005]  max price = 1e3*1e2;

ll func(ll index, ll Price_left){
    if( Price_left == 0 ) { return 0; }
    if(index <0) return 1e15;

    if( dp[index][Price_left] != -1 ) { return dp[index][Price_left]; }   ///
 
    ll ans = func(index-1, Price_left);     // don't choose item at index 

    if(Price_left - val[index] >= 0)
    ans = min(ans,  func(index-1, Price_left - val[index])   +   wt[index] );     // choose item at index

    return dp[index][Price_left] = ans;
}

// ***************************************************************************************

vector<ll> subset_sum_val;

void Subset (int num, vector<int>& value, vector<int> &subset) {
    if ( num > value.size()-1 ){
        ll sum = accumulate(subset.begin(), subset.end(), 0);
        subset_sum_val.push_back(sum);
    }
   else {
       subset.push_back(value[num]);
       Subset(num+1, value, subset);
       subset.pop_back();
       Subset(num+1, value, subset);
   }
}
                        // T.C -> 2^n.
//**************************************************************************************


int main()
{
    memset(dp, -1, sizeof(dp));

    ll n, w;
    cin>>n>>w;

    vector<int> value(n), empty;
    for(ll i=0; i<n; i++){
        cin>>wt[i]>>val[i];
        value[i]=val[i];
    }

    ll sum=accumulate(val, val+n, 0);
    //Subset(0, value, empty);

    int max_value = 1e5;

    for(int i = sum; i>= 0; --i){     // use max value(i.e constraints) or we know that wt<=sum(wt)

        if(func(n-1, i) <= w){
            cout<<i<<"\n";
            break;
        }

    }




}