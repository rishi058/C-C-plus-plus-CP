#include <bits/stdc++.h>
using namespace std;

/*
********************  STANDARD PROBELMS  **************
1. Coin Exchange
2. Edit Distance
3. ROd Cutting
4. Longest increasing Subsequence
5. KNAPSACK problem - subset probem
6. Longest common subsequence / substring


NOTE :- RECURSION IS IMP FOR DP.


*/

//**********  EXAMPLE OF DP  **************
// func(n) == nth fib number..

const int N = 1e6+7;
int dp[N];

int fib(int n){
    if(n==0) {return 0;}
    if(n==1) {return 1;}
    if(dp[n] != -1){return dp[n];}
    // memoisation

    return dp[n] = fib(n-1)+fib(n-2);
}


// dp[n] --> helps to avoid unneccesary tree. as it stores them.
// it helps to reduce time nd space complexity.


int main()
{
    int n; cin>>n;
    memset(dp, -1, sizeof(dp));     // fill it with -1..
    cout<<fib(n);
}

/*
1. TOP - DOWN Approach  -->
    in this we solve the bigger part of problem first and then move to solve smaller part in each step..
    fib is a example of this.
    in this recursion is used.
    first write brute force recursion . and then optimize it with dp.

2. BOTTOM UP Approach  -->
    in this we solve smaller part of problem and using this smaller part solve the next biger problem. nd so on
    recursion may or may not be used.

DP -> it helps to convert O(N!) = O(x^N); (x==2 mainly),
        or O(2^N) = O(N), etc

*/