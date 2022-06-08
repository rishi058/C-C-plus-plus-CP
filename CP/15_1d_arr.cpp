// ARRAY 1d
// NO. OF TOFFEE, PRICES OF TOFFEE, SUM OF TOFFEE{5-no., 7 8 9 6 0-prices, output=sum}

#include <bits/stdc++.h>

using namespace std;

int main()
{
int n;              //n=no. of tofees
cin>> n;
int array[n];                           //declaring an array "array1" whose elements are int, n=no. of elements in array .
for (int i=0; i<n; ++i){
    cin>> array[i];                         //input function for n toffees
}
int sum = 0;
for(int i=0; i<n; ++i){
    sum=sum+array[i];
}
cout<<sum;
}