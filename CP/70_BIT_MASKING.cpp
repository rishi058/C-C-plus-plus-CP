#include <bits/stdc++.h>
using namespace std;

// question link  -->  https://codeforces.com/blog/entry/73558
// Ep - 51    video no. - 62.

/*

bit masking explained  -->
2 1 7  -->  0 1 0 0 0 0 1 1 0  --> array to bin (2nd,1st,7th) is set only also represented by 2^7+2^2+2^1=133..

*/
int main()
{
    // int mask = 0;
    //     for(int j=0; j<4; j++){
    //         int days;
    //         cin>>days;
    //         mask = (mask | (1<<days));
    //     }
    //     cout<<mask<<"\n";
    int n; cin>>n;
    vector<int> masks;
    for(int i=0; i<n; i++){
        int num_workers;
        cin>>num_workers;
        int mask = 0;
        for(int j=0; j<num_workers; j++){
            int days;
            cin>>days;
            mask = (mask | (1<<days));
        }
        masks.push_back(mask);

    }

    for(int x : masks){
        cout<<x<<"\n";
    }

    int max_days = 0;
    for(int i=0; i<n; ++i){
        for( int j=i+1; j<n; j++){
            int intersection = (masks[i] & masks[j]);
            int common_days = __builtin_popcount(intersection);
            int max_days = max(max_days, common_days);
            cout<< i << " " << j << " " << common_days << endl;
        }
    }
    
    cout<<"\n"<<max_days<<"\n";
}
/*
sample input -->
5
4
1 4 7 9
6
2 9 1 7 25 29
7
1 4 23 7 9 10 29
10
1 28 8 7 9 10 30 21 18 19
4
1 11 29 7
*/