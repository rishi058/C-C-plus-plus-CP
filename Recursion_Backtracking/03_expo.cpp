#include <bits/stdc++.h>
using namespace std;

int power(int x, int y){
    // int x^y
    if(y==1){return x;}
    return 1LL*x*power(x,y-1);
}

int main()
{
    cout<<power(2,4);
}