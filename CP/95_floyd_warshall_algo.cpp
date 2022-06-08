#include <bits/stdc++.h>
using namespace std;

/*
    DIRECTED GRAPH -->

Dijkstra algo is used when 1 source is there....

for obtaining shortest path b/w all pairs of vertices..where edges have diff wt's...
this algo is used..

this algo also handles -ve weights of edges..
but not handles cycle with net -ve weights..

CONCEPT :-
let k = 1, 2, 3 ... utpo n  -->  (n = no. of vertices)
now we store each pair's info(i.e dist) in a nXn  matrix where -> the indices(i.e row nd col. no.) of matrix denotes pairs...
first we give all value of matrix = inf; nd then give the dist - 0 to pairs of same verices(i.e 1,1 - 2,2 - 3,3...etc) 

in this algo we take a pair at a time and find dist b/w them through every other nodes and finally store its min value...
let there be a pair of vertices i,j intially the dist b/w i and j vertex is the value of dist[i][j]..
we go through every other vertices k(k=1,2,3..) and calclulate dist through it..by dist[i][k] + dist[k][j]...
let i=1, j=4  if intially dist b/w 1 nd 4 is 55..now when we go from 1 to 2 (dist b/w is 11) nd from 2 to 4(dist b/w them is 15) so new shorter dist is 26...

*/

const int N = 500;
const int inf = 1e3+8;
int dist[N][N];

int main()
{
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i==j){dist[i][j]=0;}
            else {dist[i][j]=inf;}
        }
    }

    int n,m;
    cin>>n>>m;

    for(int i=0; i<n; i++){
        int x,y,wt;
        cin>>x>>y>>wt;
        dist[x][y] = wt;
    }

    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                // if (dist[i][k] != inf && dist[k][j] !=inf)       --> USE THIS CONDITION TO HANDLE -VE WEIGHTS..
                dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
            }
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(dist[i][j]==inf){cout<<"I ";}
            else {cout<<dist[i][j]<<" ";}
        }
        cout<<endl;
    }

    return 0;
}

/*
**********self-made-input***********
6 9
1 2 1
1 3 5
2 3 2
2 5 1
2 4 2
3 5 2
4 6 1
4 5 3
5 6 2
*/