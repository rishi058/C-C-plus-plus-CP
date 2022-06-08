#include <bits/stdc++.h>
using namespace std;

void printbinary(int x){
    for(int i=10; i>=0; --i){        // 10 bit bin
        cout << ( (x>>i) & 1) ;     //one of the optimized way to print bin..
    }
    cout<<endl;
}

// 1      1      0      0     1
// 4th, 3rd,   2nd,    1st,   0th bit...

// use 1<<n to calculate 2^n;
// traditional way to calculate bin is divide by 2 note its remainder and so on...
// traditional way to convert bin to dec is mutliply 0th bit with 2^0 + 1st bit with 2^1 + so on...

//  LSB --> least significant bit --> leftiest bit(1 or 0)
//  MSB --> most significant bit --> rightiest bit(1 or 0)

// NOTE -->  2^x - 1 = 1111..   in bin..

// Set bit --> 1
// Unset bit --> 0

int main()
{   cout<<INT8_MAX<<endl;
    printbinary(INT8_MAX);
    printbinary(31);
    printbinary(14);
    printbinary(19);

}