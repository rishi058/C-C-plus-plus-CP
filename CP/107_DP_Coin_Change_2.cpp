 #include <bits/stdc++.h>
using namespace std;

/*      ---  HARD  --

you are given n diffrent types of coins, and a amount.
find the total no. of ways to complete the amount.
if no such combination of coins exists that can complete the ammont print 0.
NOTE :- each diffrent type of coin is infinite in numbers.

***************  APPROACH***********

2D - DP..
using normal recursion we can get more than required ans, due to repeated combinations..
E.g -> 1,1,2 & 1,2,1 are same...
so we should use 1 type of coin and use them to make combination until its sum>=amount..
then start using another type of coin...


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

int dp[310][10010];     //  -->  constraints [length of coins][amount]

int func1(int index, int amount, vector<int> &coins){

    if(amount==0) { return 1; }
    if(index<0 && amount!=0){return 0;}

    if(dp[index][amount] != -1) return dp[index][amount];     ///

    int ways = 0;
    for(int coin_amount = 0; coin_amount<=amount; coin_amount += coins[index]){
        ways += func1(index-1, amount-coin_amount, coins) ;
    }

    return dp[index][amount]=ways;    ///

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

        cout<<func1(v.size()-1, sum, v);

        cout<<"\n";

    }

}