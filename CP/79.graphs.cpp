#include <bits/stdc++.h>
using namespace std;

/*********GRAPH REPRESENTATION*************
1. Adjency method
2. list - array of vectors   (most common)

In adjency(i.e matrix method):-
--> we have to make a matrix of rows/columns equal or greater than constraints of magnitude(i.e value of vertices);
--> in this, -ve value can't be used as a magnitude, bcz rows/column depict values..
--> element of the matrix depict weight of edges (0 if no edge exists)

--> it is suitable for both directed and undirected graph

--> Generally input is given by :-  (eg of undirected with cycle graph :-)
6 9      // n,m  = no. of vertices, edges__;
1 3     // connecting components given __
1 5    //weights if given :-
3 5   6
3 5   4
3 4   3
3 6
3 2
2 6
4 6
5 6

lect. - 83
*/

const int N = 1e3+7;
int graph[N][N];   // globally all el. = 0

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int v1,v2;  //int weight
        cin>>v1>>v2; // >> weight ;
        graph[v1][v2] = 1;   // = weight
        graph[v2][v1] = 1;  //undirected therfore both ways are 1;
    }

    // O(n^2) space-->
    // N <= 10^4 
    
// in adjacency method , it is easy to find whether 2 vertices is conn. or not
// or what is weight of edge b/w them -->   by accessing graph[i][j] directly..  O(1)_


}