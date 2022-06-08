#include <bits/stdc++.h>
using namespace std;

int dig_sum(int x){
    if(x/10==0){return x%10;}
    return x%10 + dig_sum(x/10);
}

int main()
{
    cout<<dig_sum(12345);
}