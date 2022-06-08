#include <bits/stdc++.h>
using namespace std;

/*
*****************FINDING HEIGHT AND DEPTH IN A TREE USING DFS **************************

Height And Depth in a tree. (no. of edges in b/w)  (height of a vertex in dist of it from bottom-most vertex) (depth of vertex is dist of it from its root)
note --> height of leaf node is zero always...

*/

const int N=1e5+7;
vector<int> g[N];
int depth[N];
int height[N];

void dfs(int vertex, int par=0){
    /*
    take action on vertex after entering vertex
    */
    for(int child : g[vertex]){
        /*
        take action on child before entering child node
        */
        if(child==par) {continue;}
        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);
        height[vertex] = max(height[vertex], height[child] + 1);
        /*
        take acton on child after entering child node
        */
    }
    /*
    take action on vertex before exiting the vertex
    */
}

int main()
{
    int n; cin>>n;  // n = no. of vertex.

    for(int i=0; i<n-1; i++){   // n-1 = no. of edges..
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    // HERE VALUE OF VERTICES ARE 1 T0 N;
    
    dfs(1);

    for(int i=1; i<=n; i++){
        cout<<depth[i]<<" "<<height[i]<<endl;
    }

}
/*
13
1 2
1 3
1 13
2 5
3 4
5 6
5 7
5 8
8 12
4 9
4 10
10 11
*/