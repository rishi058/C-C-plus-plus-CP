#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>> n;                 //inupt-->   6
    vector<int> v(n);               //           2 3 1 6 7 6         
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    //******** YOU CAN ALSO ALTER STARTING AND ENDING POINTS ***************

    //This func gives address therfore pointer is used..
    int m1 = *min_element(v.begin()+3, v.end());
    cout<<m1<<endl;

    //This func gives address therfore pointer is used..
    int m2 = *max_element(v.begin(), v.end());
    cout<<m2<<endl;
    
    //This func is used to calc sum of list. 0 is given to add it..  
    int sum = accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;

    //This func is used to find count of a particular element..
    int ct = count(v.begin(), v.end(), 6);
    cout<<ct<<endl;
    
    //Find Func
    auto it = find(v.begin(), v.end()-1, 7);
    cout<<(*it)<<endl;

    //Reverse func --> can be used in array nd strings..
    reverse(v.begin(), v.end());
    for(auto f:v){
        cout<<f<<" ";
    }
}