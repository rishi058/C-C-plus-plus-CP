#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(string value : s){
        cout << value << endl;
    }
}

int main()
{
    set<string> s;
    s.insert("abc");
    s.insert("vda");
    s.insert("wer");
    s.insert("jjj");
    auto it = s.find("vda");
    s.erase(*it);
    s.erase("abc");
    print(s);
}