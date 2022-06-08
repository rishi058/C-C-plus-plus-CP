#include <bits/stdc++.h>
using namespace std;

/*
************GRAPH REPRESENTATION*************
2. List method

-->array of vectors  ( vector <int> graph[N] )    N = 1e7;

-->size of array is the constraint given (i.e max value of vertex)
-->let x is a value so x^th element of array will have a vector of (value of vertices) to which it is connected to..

--> if wieght is given  ( vector<pair<int>> graph[N] )   inserting weight with each vertex.

--> Generally input is given by :-  (undirected Eg-->)
6 9            // n,m = no. of verices, edges :-
1 3 4
1 5 3
3 5 2
3 4 7
3 6 8
3 2 9
2 6 1
4 6 2
5 6 3
*/

const int N = 1e5+5;
vector<pair<int,int>> graph[N];    // all ele of array is 0 initially..

int main()
{
    int n, m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int v1, v2, wt;
        cin>>v1>>v2>>wt;

        graph[v1].push_back({v2, wt});  // vetex v1 is conn. to v2    
        graph[v2].push_back({v1, wt});  //vertex v2 is conn. to v1   --since undirected--
    }
}
/*

in adjacency method , it is easy to find whether 2 vertices is conn. or not
or what is weight of edge b/w them -->   by accessing graph[i][j] directly..  O(1)_

in list it is not possible--> we have to use loop-->

for(int chilld : graph[i]){
    if(child==j){
        cout<<"connected ";
    }
}

or

for( pair <int,int> chilld : graph[i] ){
    if(child.first==j){
        cout<<"connected ";
        cout<<"weight : "<<child.second ;
    }
}

*/