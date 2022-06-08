/*
Given N strings and Q queries.
in each query you are given a string
print yes if string is present alse print no.
*/
#include <bits/stdc++.h>
using namespace std;
/*
if order is not a issue better use unordered sets bcz -->
1. less time
2. inbuilt impletation - hast table
3. valid keys datatype - keys=int,ll,double,etc. ||  keys!=pairs,etc --> :-(
*/
int main()
{
    unordered_set<string> s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    int q; cin>>q;
    while(q--){
        string str;
        cin>>str;
        if(s.find(str) == s.end()){
            cout<<"no\n";
        }
        else {cout<<"yes\n";}
    }

}