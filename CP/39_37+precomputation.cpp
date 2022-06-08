/*
given array a of N integers. Given Q queries and in each given query given L and R 
print sum of array elements from index L to R(L,R included)
Constraints -->                 sample input-->       sample output-->
1 <= N <=10^5                   6                       8
1 <= a[i] <= 10^9               3 6 2 8 9 2             19
1 <= Q <= 10^5                  4                       28
1 <= L, R <= N                  2 3                     21
                                4 6
                                1 5
                                3 6
*/

//*********PRE-COMPUTATION---BY USING PREFIX SUM************
//*********REDUCING TIME COMPLEXITY**************
#include <bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int arr[N];
int pf[N];
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 1; i<=n; ++i){
        cin>>arr[i];
        pf[i] = pf[i-1] + arr[i];
    }
    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << pf[r] - pf[l-1]<< endl;
    }
}