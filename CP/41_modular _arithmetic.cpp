/*
properties -- 
(a+b) % M = ((a % M) + (b % M )) % M            (%==remainder func.)
(a*b) % M = ((a % M) * (b % M )) % M
(a-b) % M = ((a % M) - (b % M) + M) % M
(a/b) % M = ((a % M) * (b^-1) % M) % M

Given a number N. Print its Factorial.
Constraints--
1 <= N <= 100

print the answer module M , where M = 47 
(meaning output always less than 47)
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int M = 47;
    long long fact=1;
    for(int i = 2; i<=n; i++ ){
        fact = (fact * i) % M;
    }
    cout<<fact;
}
/*
(1 X 2 X 3 X 4 X 5 ) % 47
(1 X 2 X 3 X 4) % 47 X 5%47
.......
*/

