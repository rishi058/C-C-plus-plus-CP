//23 NO QUESTION

#include <bits/stdc++.h>
using namespace std;
int main (){
    int t,n;
    cin>>t;
    cin >> n;
    while(t--){
    int p, arr[n]; 
    p=1;
    for(int i=0;i<n;i++){
        cin  >> arr[i];
        p = p*arr[i];
    }
    int dt = p%10;
    if( dt==2 || dt==3 || dt ==5){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    }

}