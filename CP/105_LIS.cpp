#include <bits/stdc++.h>
using namespace std;
/*
Find the length of longest increasing subsequence (NOTE :- Subarray & Subsequence are diff. things)
E-g --> 10 9 2 5 3 7 101 18   --- 2 3 7 101

*********  APPROACH  *********
Start from nth index of array. first compare it with prev element if it is smaller do so on..
and similarly compare nth index with second prev element and so on..  A lot of result will be obtained --> store its max..

Note :- LIS of reverse sorted list is of length 1.

*/

const int N = 1e6+10;
vector<int> a(N);
int dp[N];

int LIS(int i){                                 /// Code given by luv..
    if(dp[i] != -1){return dp[i];}          ///
    int ans = 1;
    for(int j=0; j<i; j++){
        if(a[i]>a[j])
        ans = max(ans, LIS(j) + 1);
    }

    return dp[i]=ans;                   ///
}

int LIS1(int i){
    if(dp[i] != -1){return dp[i];}          ///
    int ans = 1;                            // given code edited by me to match approach statement...
    for(int j=i-1; j>=0; j--){
        if(a[i]>a[j])
        ans = max(ans, LIS1(j) + 1);
    }

    return dp[i]=ans;                   ///
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n; cin>>n;
    for(int i=0; i<=n; i++){
        cin>>a[i];
    }

    int ans = 0;
    for(int i=n-1; i>=0; i--){
        ans = max(ans, LIS1(i));    // you can also run the loop fron 0 to n-1...
    }

    cout<<ans;
}