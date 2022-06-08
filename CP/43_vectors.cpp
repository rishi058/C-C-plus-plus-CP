#include <bits/stdc++.h>
using namespace std;
//locally declared vector size(10^5)   ---in online cp's
//globally declared vector size(10^7)

void printvec(vector<int> v)  //here we can also write &v but it will print from direct address of v ignoring other instructions.
{
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    
}

int main()
{
    vector<int> v;

    // vector<int> v(10);  ---> we can also declare size for a vector initially its all elements are 0. 
    
    // vector<int> v(15,3) --> its means its size is 15 & all elements are 3.
    // after giving size we can alter it without any issue

    // vector<string> str_v;
    // vector<double> vd;
    // vector<pair<int,int>> vp;

    int n,x; cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }
    v.pop_back(); //removes last element.
    printvec(v);

    vector<int> v2 = v; //copy a vector very easily-O(N)-TIME TAKING
    vector<int> &v2 = v; //connecting v2 and v
}