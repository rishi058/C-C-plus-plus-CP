/*
maps-->
int     -       string

1       -       abs
4       -       doda
7       -       adsdd

1. maps arranged themeselves itsef
2. it has a key and a value.
3. it doesn't store copies, but it can store no. of copies of value in keys.
4. In maps diffrent keys have same values but , but a value can;t have diffrent keys.

*/
#include <bits/stdc++.h>
using namespace std;

// #define f(i, a, b) for(int i=0; i<b; i++)

int main()
{
    map<int, string> m;
    m[1] ="abc";
    m[4] ="bmh";
    m[6] ="jhhv";
    m.insert({7,"sfsd"});
    map<int, string> :: iterator it;

    auto it4 = m.find(1);
    m.erase(it4);    

    for(it = m.begin(); it!=m.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    
    cout<<endl;

    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    
}