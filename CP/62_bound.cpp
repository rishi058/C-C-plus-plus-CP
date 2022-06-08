#include <bits/stdc++.h>
using namespace std;

//********* bound syntax for maps and sets are diffrent.
//********  in maps bound is used for keys only....

int main()
{
    int n; cin>>n;
    set<int> s;
    map<int, string> m;
    s.insert(4);
    s.insert(5);
    s.insert(5);
    s.insert(25);
    s.insert(7);
    s.insert(8);
    auto it = s.lower_bound(5);
    cout<<(*it)<<endl;
    m[1] ="abc";
    m[4] ="bmh";
    m[5] ="wrf"; 
    m[6] ="jhhv";
    auto it2 = m.upper_bound(4);
    cout<<(*it2).first<<" "<<(*it2).second<<endl;

}