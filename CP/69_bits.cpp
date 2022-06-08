#include <bits/stdc++.h>
using namespace std;

/*

XOR -->  represented by ( ^ ).

1  0  -->  1
0  1  -->  1
0  0  -->  0
1  1  -->  0

properties -->
1. xor of identical's is zero.
2. xor of a no. with zero is no. itself.

e.g  --> 
1.                          2. 
5 ^ 5 = 0     i.e             1 0 1
5 = 101 and `                 0 0 0 ^
1 0 1                        -------
1 0 1 ^                       1 0 1
------
0 0 0 

a^b^c == b^a^c == c^a^b...   ---> IMP

*/
int main()
{
/*
Given array a of n integers. All integers are present in event
count except one. Find that one integer which has odd count
in O(N) time complexity and O(1) Space complexity.
N < 10^5
a[i] < 10^5

*/
    int n; cin>>n;
    int x, ans = 0;
    for(int i=0; i<n; i++){
        cin>>x;
        ans ^=x;
    }
    cout<<ans<<endl;
    
    //this question is solved using propertiy 1 and 2..
}