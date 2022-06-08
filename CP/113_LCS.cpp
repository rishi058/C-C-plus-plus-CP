#include <bits/stdc++.h>
using namespace std;

/*********  HARD  *********8

LONGEST COMMON SUBSEQUENCE  -->
Given two strings or arrays, find logest common subsequece...
E.g -> abcdefq & akcfgdhe  --> LCS = acde(len=4)
       ABCD  &  ACBAD  -->   ABD & ACD are LCS ..

NOTE :- COMMON SUBSEQUENCE & COMMON ELEMENTS ARE TWO DIFFRENT THINGS..
*/

string s1, s2;
int dp[1003][1003];

int LCS(int i, int j){
    if(i<0 || j<0){return 0;}
    if(dp[i][j] != -1){ return dp[i][j];}        /// 

    //remove 1 char from s1
    int ans = LCS(i-1, j) ;

    //remove 1 char from s2
    ans = max(ans, LCS(i,j-1));

    //remove 1 char from both s1 & s2
    ans = max(ans, LCS(i-1, j-1)) + (s1[i]==s2[j]) ; // if equal +1 otherwisw +0..-- {child of final recursion from where ans begins to generate}

    return dp[i][j]=ans;

}

int main()
{
    memset(dp, -1, sizeof(dp));
    cin>>s1>>s2;
    cout<<LCS(s1.size()-1, s2.size()-1);
}
