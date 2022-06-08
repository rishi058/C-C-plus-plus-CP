#include <bits/stdc++.h>
using namespace std;

/*
use in sorted list...

lower_bound --> use to find a element in a list if it isn't present it gives the address of next element
upper_bound --> if a element is present this will give you the adress of next element of it.

it can be used in array,vectors,strings,maps,set,pairs,etc...

NOTE --> if the next element isn't present it will give location of the next element bcz
         this func works on finding locations...

syntax -->  upper_bound(location from where you want to start,location upto which you want to search,element you want to search)
*/

int main()
{
    int n; cin>> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int *ptr2 = lower_bound(a,a+n,26);
    if(ptr2==a+n){cout<<"Not Found"<<endl;}
    int *ptr = lower_bound(a,a+n,5);
    
    int *ptr3 = upper_bound(a,a+n,5);
    int *ptr4 = upper_bound(a,a+n,8);

    cout<<(*ptr)<<endl<<(*ptr3)<<endl<<(*ptr4)<<endl;

    /*
    input-->            
    6
    4 5 5 25 7 8
    */

}