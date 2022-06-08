#include <bits/stdc++.h>

using namespace std;

//RECURSION


int fact(int x)
{   
    if(x<=1){return 1;}
    return x*fact(x-1);
}

int sum_upto_n(int x){
    if(x<=1){return 1;}
    return x+sum_upto_n(x-1);
    cout<<x<<" ";
}

int fib(int x){
    if(x==0){return 0;}
    if(x==1){return 1;}
    return fib(x-1) + fib(x-2);
}

int main()
{
    int t;
    cin>>t;
    cout<<fact(t)<<endl;
    cout<<sum_upto_n(t)<<endl;
    cout<<fib(t);
}