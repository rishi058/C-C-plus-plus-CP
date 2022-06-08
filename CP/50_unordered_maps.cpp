#include <bits/stdc++.h>
using namespace std;
/*
if order is not a issue better use unordered maps bcz -->
1. less time
2. inbuilt impletation - hast table
3. valid keys datatype - keys=int,ll,double,etc....keys!=pairs,etc
*/
int main()
{   
    unordered_map<int, string> m;
    m[1] ="abc";
    m[4] ="bmh";
    m[6] ="jhhv";
    m.insert({7,"sfsd"});

    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    
}