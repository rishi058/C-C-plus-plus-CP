//Vector of vectors

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
{   int n;
    cin>>n;
    vector<vector<int>> v;
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        vector<int> temp; // v.push_back(vector<int> ()); -->also be used
        for(int j=0; j<n; j++){
            int x;
            cin>>x;
            temp.push_back(x); //v[i].push_back--> if line 22 is changed
        }
        v.push_back(temp);  //delete it if change is done..
    }
    v[0].push_back(10);    
    v.push_back(vector<int> ());
    for(int i=0; i<n; i++){ //n=v.size() also be used
        printvec(v[i]);
    }
    cout<<v[0][1]; // 1st[]--> n th element of vector v || 2nd--> m th elment of the vector n ..
}