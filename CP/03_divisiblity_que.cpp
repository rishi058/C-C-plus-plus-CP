#include<bits/stdc++.h>

using namespace std;

int main(){
     int n;
    cin >> n;
    if (n%2 == 0)
    {
        cout<<"YES";
    }
    else if(n%3 == 0){
        cout<<"DIVISIBLE BY 3";
    }
    else{
        cout<<"NO";
    }

}