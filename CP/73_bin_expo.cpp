#include <bits/stdc++.h>
using namespace std;

// pow(a,b) have its limitations. -->
//  it gives inaccurate value with float or double operarions..

//therefore using bin_expo + recursion..

const long int M = 1e9+7;

int binExpoRecur2(int a, int b){
    if(b==0) return 1;
    int res = binExpoRecur2(a, b/2);
    if(b&1){                            //(b&1) = (b%2 ==1)
        return (a * (res * 1LL * res) % M ) % M;     
    }
    else {
        return (res * 1LL * res) % M;   // use 1LL or long long res..
    }
}


int binExpoRecur(int a, int b){
    if(b==0) return 1;
    long long int res = binExpoRecur(a, b/2);
    if(b&1){                            //(b&1) = (b%2 ==1)
        return a * res  * res;     
    }
    else {
        return (res * res);
    }
}

int binExpoIter(int a, int b){          //iteration method..
    int ans = 1;
    while(b){
        if(b&1){ans = (ans * 1LL *a)%M; }
        a = (a* 1LL * a)%M;
        b >>=1;
    }
    return ans;
}

// MORE EFFECIENT THAN RECURSION-->

int main()
{
    int a = 2, b = 13, c = 100003, d=1231231, e = 2123123;
    cout<<pow(c,a)<<endl;
    cout<<pow(c,2)<<endl;
    cout<<pow(d,d)<<endl;  //dont give output large data..

    cout<<binExpoIter(e,d)<<endl;
    cout<<binExpoRecur2(e,d)<<endl;

    cout<<binExpoRecur(a,b)<<endl;
    cout<<binExpoRecur2(a,b)<<endl;

    cout<<binExpoRecur(c,a)<<endl;
    cout<<binExpoRecur2(c,a)<<endl;
}       
