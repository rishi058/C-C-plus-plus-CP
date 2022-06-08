#include <bits/stdc++.h>
using namespace std;

/*
THIS SEARCH PREFER HEIGHT(BREADTH) RATHER THAN DEPTH(DFS) 
IT GOES FROM LEFT TO RIGHT GENERALY, AS GIVEN INPUT..

it is applicable for both tress and graphs..

it is used to calculate shortest path b/w two nodes if 
weight of egdes are equal..

*/
const int N = 1e5+6;
vector<int> g[N];
int vis[N];
int level[N];

void bfs(int source)              // NO RECURSION IS USED -->
{
    queue<int> q;
    q.push(source);   // GIVING ROOT NODE (i.e 1)
    vis[source] = 1;

    while(!q.empty())
    {
        int current_vertex = q.front();
        q.pop();

        cout<<current_vertex<<" ";

        for(int child : g[current_vertex]){   // accessing the list of vertices to which root is connected..
            if(!vis[child]){
                q.push(child);
                vis[child] = 1;
                level[child] = level[current_vertex] + 1;
            }
        }
    }
}

int main()
{
    int n; cin>>n;
    for(int i=0; i<n-1; i++){
        int x,y;
        cin>>x>>y;

        g[x].push_back(y);
        g[y].push_back(x);
    }

    bfs(1);

    cout<<"\n";
    for(int i=1; i<=n; i++){
        cout<<i<<" : "<<level[i]<<"\n";
    }

}
/*
13
1 2
1 3
1 13
2 5
5 6
5 7
5 8
8 12
3 4
4 9
4 10
10 11
9 11
*/