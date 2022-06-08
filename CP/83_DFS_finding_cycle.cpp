#include <bits/stdc++.h>
using namespace std;

// finding cycle in a graph

const int N=1e5+7;
vector<int> g[N];
bool vis[N];

bool dfs(int vertex, int parent){  // -->  DFS

   vis[vertex]=true;
    bool isloopexist = false;
    for(int child : g[vertex]){
        
        if(vis[child] && child==parent){continue;}
        if(vis[child]) {return true;}

        isloopexist |= dfs(child, vertex);
       
    }
   
}

int main()
{
    int n, e;
     cin>>n>>e;

     for(int i=0; i<e; i++){
         int x,y;
         cin>>x>>y;
         g[x].push_back(y);
         g[y].push_back(x);
     }

    bool loop = false;
     for(int i=1; i<=n; i++){
         if(vis[i]) {continue;}
         if(dfs(i, 0)){loop=true; break;}
     }

     cout<<loop<<endl;
}
/*
*********INPUT**********
8 5
1 2
2 3
2 4
3 5
6 7 
-----> 0
8 6
1 2
2 3
2 4
3 5
6 7
1 5
-----> 1
*/