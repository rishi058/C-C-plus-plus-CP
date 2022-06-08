#include <bits/stdc++.h>
using namespace std;

void print(multiset<string> &s){
    for(string value : s){
        cout << value << endl;
    }
}

// here copies are allowed...
// elements are ordered...

int main()
{
    multiset<string> s;
    s.insert("abc");
    s.insert("abc");
    s.insert("vda");
    s.insert("wer");
    s.insert("jjj");
    s.insert("jjj");

    auto it = s.find("jjj");
    if(it != s.end()){
        s.erase(it);     //delete single value
    }

    s.erase("abc");      //delete all similar value

    print(s);
}