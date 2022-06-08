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

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 1; i<=n; ++i){
        cin>>arr[i];
    }
    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        int sum = 0 ;
        for(int i = l; i <= r; ++i){
            sum += arr[i];
        }
        cout << sum << endl;
    }
}