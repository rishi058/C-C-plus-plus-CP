#include <bits/stdc++.h>
using namespace std;

/*
input-->            
6
4 5 5 25 7 8
*/

int main()
{
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl; 
    auto it = lower_bound(a.begin(), a.end(), 53);
    if(it==a.end()){
        cout<<"Not Found"<<endl;
    }
    cout<<(*it)<<endl;
    int x = distance(a.begin(), it);
    cout<<x;
}