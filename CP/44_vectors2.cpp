//array of vectors....

#include <bits/stdc++.h>
using namespace std;

void printvec(vector<int> &v)
{
    cout<<"size = "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int t; cin>>t;
    vector<int> v[t];
    // t vectors(of size 0-initially) in a array v;
    for(int i=0; i<t; i++){
        int x; cin>>x;
        for(int j=0; j<x; j++){
            int y; cin>>y;
            v[i].push_back(y);
        }
    }
    for(int i=0; i<t; i++){
        printvec(v[i]);
    }
    cout<<v[0][0]; // 1st[]-->nth element of array || 2nd-->nth elment of the vector
}