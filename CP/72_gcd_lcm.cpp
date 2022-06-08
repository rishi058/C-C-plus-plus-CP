#include <bits/stdc++.h>
using namespace std;

/*
gcd == hcf

lcm of 2 no. (a,b) -->
(a*b)/__gcd(a,b) == lcm

gcd of 3 no. = gcd(gcd(a,b),c)
similar for lcm..

*/

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);   //gcd using recursion
}

int main()
{
    cout<<gcd(12,4)<<endl;
    cout<<gcd(12,14)<<endl;
    cout<<gcd(12,44)<<endl;
    cout<<gcd(1322,423)<<endl;
    cout<<gcd(1232,3194)<<endl;
}