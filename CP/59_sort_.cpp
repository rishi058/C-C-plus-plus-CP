#include <bits/stdc++.h>
using namespace std;

//syntax --> sort(location from where you want to start,location upto which you want to sort, comparator func if needed)

// ******  COMPARATOR FUNCTION FOR SORT  ***********

//This code is to arrange second element of pair into decreasing
//order.....

//false  --> means sort it acc. to STL
//true   --> maens don't sort it....

bool cmp(pair<int,int>a, pair<int,int> b)
{
    if(a.first != b.first){
        return a.first>b.first;
    }
    else{
        return a.second>b.second;
    }
}

bool cmp2(int a, int b){
    return a>b;            //---->  for printing in  decreasing order(a array or vector..)
}

int main()
{
    //***************  USING  NORMAL SORT AND EDITING ITS SORTING RANGE****************

    int arr[5] = {11,44,24,43,74};
    int arr2[5] = {11,44,24,43,74};

    sort(arr, arr+5);
    sort(arr2+2,arr2+5);

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
    for(int i=0; i<5; i++){
        cout<<arr2[i]<<" ";
    }
    
    cout<<endl;

    vector<int> v1(7),v2(7);
    
    v1 = {99,54,26,127,53,48,77};
    v2 = {99,54,26,127,53,48,77};
    
    sort(v1.begin(), v1.end());
    sort(v2.begin()+3, v2.end());
    
    for(int c : v1){
        cout<<c<<" ";
    }

    cout<<endl;

    for(int c : v2){
        cout<<c<<" ";
    }

    cout<<endl;

    //************** COMPARATOR WITH C++ STL SORT  ******************

    int n;
    cin>>n;
    vector<pair<int,int>> p(n);
    for(int i=0; i<n; i++){
        cin>>p[i].first>>p[i].second ;
    }
    
    sort(p.begin(), p.end(), cmp);

    for(int i = 0; i<n; i++){
        cout<<p[i].first<<" "<<p[i].second<<" ";
        cout<<endl;
    }


    /*
    input -->
    8
    4 3
    4 32
    5 5
    5 3
    25 6
    7 9
    8 5
    8 13
    */

}