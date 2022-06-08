#include <bits/stdc++.h>
using namespace std;

/*
This algo is used to find a tree in a undirected weighted graph whose sum of weight of edges is min.

****  APPROACH  ****
first      -->  we should delete all edges,
second     --> store the edges weight data in a sorted order in any data type..
third      --> start putting edges starting from the samllest weight, if any edges leads to form a cycle 
               skip that edge.

*/

const int N = 1e5+7;
int parent[N];
int Size[N];

void make(int v){
    parent[v] = v;
    Size[v] = 1;
}

int find(int v){                                      // Recursion 
    if(v==parent[v]) { return v; }
    else { return parent[v] = find(parent[v]); }     // path compression 
}

void Union(int a, int b){    // use uppercase U bcz union is a reserved keyword..
    a = find(a);
    b = find(b);
    if( a!=b ){   
        if(Size[a] < Size[b]) { swap(a,b); }      // logic for weighted union..
        parent[b] = a;                            // we may also use if else statement..
        Size[a] += Size[b];
    }
}

int main()
{
    int n, m;
    cin>>n>>m;
    vector<pair<int,pair<int,int>>> edges;
    for(int i=0; i<m; i++){
        int u, v, wt;
        cin>>u>>v>>wt;
        edges.push_back({wt, {u,v}});
    }
    sort(edges.begin(), edges.end());

    for(int i=1; i<=n; i++){
        make(i);
    }

    int total_cost = 0;
    for(auto &edge : edges){
        int wt = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;
        if(find(u)==find(v)){continue;}  // checking for cycle..
        Union(u,v);
        total_cost += wt;
        cout<<u<<" "<<v<<"\n";
    }
    cout<<total_cost;
}
/*
6 9
5 4 9
1 4 1
5 1 4
4 3 5
4 2 3
1 2 2
3 2 3
3 6 8
2 6 7
*/