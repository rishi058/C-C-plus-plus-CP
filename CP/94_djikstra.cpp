#include <bits/stdc++.h>
using namespace std;

/*
this algorithm is a optimized way to find the destance b/w nodes if each edge has a diffrent wt..
suppose a source node is there nd we have to find dist of every other node from it..

NOTE :- dist b/w source node nd normal node may have diffrent value's but you have to choose min...(dijikstra)

APPROACH :-
from source, go to every child nd store its dist(wt), child_name...
from every child_name go to there child's and if there child is part of prev child compare dist(wt), if min push it in priorty queue
else leave it, if child has no other parent mark it visited nd store it final min wt..

*/

const int N = 1e5+9;
const int inf = 1e9+9;

vector<pair<int,int>> g[N];     // pair(vertex, wt)

void dijkstra(int source){
    vector<int> vis(N,0);               //also can be declared in global..
    vector<int> dist(N, inf);           //also can be declared in global..

    set<pair<int,int>> st;      // set will auto. sort with it pair.first (there first -> wt.)
    st.insert({0, source});
    dist[source] = 0;

    while(st.size() > 0)
    {
        auto node = *st.begin();
        int v = node.second;
        int v_wt = node.first;

        st.erase(st.begin());

        if(vis[v]==1){continue;}
        vis[v] = 1;

        for(auto child : g[v]){
            int child_v = child.first;
            int wt = child.second;

            if(dist[v] + wt < dist[child_v]){
                dist[child_v] = dist[v] + wt;
                st.insert({dist[child_v], child_v});
            }
        }

    }

    for(int i=1; i<=6; i++){
        cout<<i<<"  --distance-->  "<<dist[i]<<"\n";
    }
}

int main()
{
    int n,m;
    cin>>n>>m;    // no. of vertices  && no. of edges..

    for(int i=0; i<m; i++){
        int x,y,wt;             // x is connected to y... with weight = wt..
        cin>>x>>y>>wt;

        g[x].push_back({y, wt});  // directed graph therefore only 1 time input..
    }

    dijkstra(1);
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
*********OUTPUT********
1  --distance-->  0
2  --distance-->  1
3  --distance-->  3
4  --distance-->  3
5  --distance-->  2
6  --distance-->  4

*/