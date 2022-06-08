#include <bits/stdc++.h>
using namespace std;

// 6 basic bit manipulation techniques..

void printbinary(int x){
    for(int i=10; i>=0; --i){
        cout << ( (x>>i) & 1) ;     //one of the optimized way to print bin..
    }
    cout<<endl;
}

int main()
{
    // checking odd or even (faster than %2 technique)
    int a; cin>>a;

    if(a&1){cout<<"odd\n";}        // a%1 == 0 or 1 (i.e) true or false
    else{cout<<"even\n";}

    //multiply or divide a number by 2^n;
    int x; cin>>x;
    cout << "x*2 = " << (x<<1) <<endl;
    cout << "x*2^3(i.e 8) = " << (x<<3) <<endl;

    cout << "x/2 = " << (x>>1) <<endl;
    cout << "x/2^3(i.e 8) = " << (x>>3) <<endl;

    //upper to lower or vice versa using bit manipulation

    char e; cin>>e;
    cout<< e << " = " << char( e | ' ') <<endl;  //capital to smaller

    char q; cin>>q;
    cout<< q << " = " << char( q & '_') <<endl;   //smaller to capital



    // clear lsb upto nth bit --> unset all bit from 0 to nth.
    int aa = 71, k = 2;
    printbinary(aa);

    int b = ( aa & (~((1<<(k+1)) - 1 )));
    printbinary(b);

    // clear msb upto nth bit --> unset all bit from msb to nth.

    int c = ( a & ((1<<(k+1)) - 1 ));
    printbinary(c);

    //checking a no. is power of 2 or not..

    int rr; cin>>rr;
    if( rr & (rr-1) ){cout<<" not power of 2";}
    else {cout<<"power of 2";}
}