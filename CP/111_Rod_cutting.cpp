#include <bits/stdc++.h>
using namespace std;

/*
UNBOUNDED KNAPSACK....

Given a rod of N inches and a array of prices of all pieces of size smaller than N.
Determine rhe maximum value obtained by cutting and selling the rod..
***********  INPUT  *********
2                               (test cases)
8                               (size of rod)
1 5 8 9 10 17 17 20             (price of 1,2,3...N)
8
3 5 8 9 10 17 17 20
*********  OUTPUT  **********
22                              (5+17)
24

*****************   APPROACH   ******************
This can't be properly be also solved by greedy method (similar like sandbag prblm)(fractional knapsack)..
calc rate of rod per unit length and sort it...(sometimes give right soln but not eveytime)
only drwaback is that if len = 7, if he choose 4, 1, then only option is to choose 2 now, 
but yet we dont know other soln can be more optimal
E.g -> 
4
1 5 8 9
grredy will give(9) but optimal is (10)

*/

vector<int> prices;
const int N = 1e5+7;
int dp[N];


int func(int len){
    if(len==0){return 0;}
    if(dp[len] != -1) return dp[len];           //

    int ans = 0;
    for(int len_to_cut = 1; len_to_cut <= prices.size(); len_to_cut++){
        if(len - len_to_cut >= 0){
            ans = max( ans, func(len - len_to_cut) + prices[len_to_cut-1] );
        }
    }
    return dp[len] = ans;               //

}



int main()
{
    int t; cin>>t;
    while(t--)
    {
        prices.clear();
        memset(dp, -1, sizeof(dp));

        int n; cin>>n;

        for(int i=0; i<n; i++){
            int x; cin>>x;
            prices.push_back(x);
        }

        cout<<func(n)<<"\n";
    }
}