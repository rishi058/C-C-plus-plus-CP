#include <bits/stdc++.h>
using namespace std;

/*
Q.1 -> Given and array A & sum S, Find it is possible that a subset Sum of A = S.
Q.2 -> Given an array A, is it possible to divide it into two Subset that there sum are equal..

***********  APPROACH  **********8
using generating subset algo, we can solve this brute-forcly..
Q.2 -> generate all subset and check any subset has sum = S/2,

*/

bool func(int i, int sum, vector<int> v){
    if(sum ==0 ){return true;}
    if( i<0 ){return false;}


    // not cosider ith index
    bool is_possible = func(i-1, sum, v);

    // consider ith index
    is_possible |= func(i-1, sum-v[i], v);  // or is equal to...

    return is_possible;
}

bool can_partition(vector<int> v){
    int sum = accumulate(v.begin(), v.end(), 0);
    if(sum%2==1){return false;}
    sum = sum/2;
    return func(v.size()-1, sum, v);

}

int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    cout<<can_partition(v);
}