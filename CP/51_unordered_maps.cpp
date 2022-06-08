/*
Given N strings and q queries. in each query you are given a string 
print its frequency
N <= 10^5
|s| <= 100
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string,int> m;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        m[s]++;
    }
    int q; cin>>q;
    while(q--){
    string str; cin>>str;
    cout<< m[str]<<endl;
    }

}