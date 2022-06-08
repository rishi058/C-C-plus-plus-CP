#include <bits/stdc++.h>
using namespace std;

/*
********* Code-forces -- div1 -- medium-hard-question  -- Greg and Graph  ***********
you have a weighted directed graph consisting n vertices..you have to do "n" operations(1 to n)..
in each operation remove a vertex nd its all related vertices..before each operation you have to print 
the sum of lengths of shortest path b/w all pairs..

******input******
n                --> no. of vertices..(1 to n)
n X n            --> 1 index matrix whose elements denotes distance.
a,b,c,d..        --> 'n' no.'s  (ranged b/w 1 to n in random) the order of verices he wants to del

************  APPROACH  ************
we will aplyy floyd warshall in reversed(i.e) -->
first we insert the last vertex, calculate dist matrix nd store the sum of matrix in vector..

NOTE :- we will not use inf bcz it is given every pair is connected 
*/

const int N = 501;
long long dist[N][N];

int main()
{
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>dist[i][j];
        }
    }

    vector<int> del_order(n);
    for(int i=0; i<n; i++){
        cin>>del_order[i];
    }

    reverse(del_order.begin(), del_order.end());

    vector<long long> ans;

    for(int k=0; k<n; k++){
        int k_v = del_order[k];
        // cout<<k_v<<" ";
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                //cout<<k<<"-"<<i<<"-"<<j<<"   ";
                long long new_dist = dist[i][k_v] + dist[k_v][j];    // dist of pairs through vertex inserted nd minimize it
                dist[i][j] = min(dist[i][j], new_dist);
            }
        }

        long long sum=0;
        for(int q=0; q<=k; q++){
            for(int r=0; r<=k; r++){
                sum += dist[del_order[q]][del_order[r]];
            }
        }
        ans.push_back(sum);

    }
    reverse(ans.begin(), ans.end());
    for(long long g : ans){
        cout<<g<<" ";
    }
    cout<<endl;
}
/*
*******input 1 ******
1
0
1
******output 1*****
0


*******input 2 ******
2
0 5
4 0
1 2
******output 2*****
9 0


*******input 3 ******
4
0 3 1 1
6 0 400 1
2 4 0 1
1 1 1 0
4 2 1 3
******output 3*****


*/