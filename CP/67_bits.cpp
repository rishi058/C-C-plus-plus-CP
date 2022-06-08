#include <bits/stdc++.h>
using namespace std;

/*

~ --> inverse.
~(1 0 0 1)  -->  (0 1 1 0)

and(*)
1   0   -->     0
1   1   -->     1
0   1   -->     0
0   0   -->     0

or(+)
1   0   -->     1
1   1   -->     1
0   1   -->     1
0   0   -->     0

xor(identical = zero)
1   0   -->     1
1   1   -->     0
0   1   -->     1
0   0   -->     0
*/

void printbinary(int x){
    for(int i=10; i>=0; --i){
        cout << ( (x>>i) & 1) ;     //one of the optimized way to print bin..
    }
    cout<<endl;
}

int main()
{
    // check nth bit is set(i.e 1) or not ...         using properties..
    
    int n,a = 9;
    cin>>n;
    if( (a & (1<<n)) != 0){         // 1<<n = 2^n;
        cout<<"set bit";
    }
    else{cout<<"not set bit";}

    /*

    a = 1001
    let n = 3
    1   0   0   1

    1   0   0   0    --> (1<<3)  -->  2^3=8;
    ______________&

    1   0   0   0   -->  not all 0 

    */

    // how to set(convert to 1) rth bit of a bin.

    int r; cin>>r;
    printbinary( a | (1<<r));

    //how to unset set kth bit of a bin;

    int k; cin>>k;
    printbinary( a & (~(1<<k)));

    //counting set bits (for int) -->

    int tt; cin>>tt;
    cout<< __builtin_popcount(tt) <<endl;

    //counting set bits  (for ll) -->

    long tr; cin>>tr;
    cout<< __builtin_popcountll(tr) <<endl;

}