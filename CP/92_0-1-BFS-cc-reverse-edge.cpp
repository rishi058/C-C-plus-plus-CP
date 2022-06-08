#include <bits/stdc++.h>
using namespace std;

/*
0 1 BFS IS A TECHNIQUE TO FIND SHORTEST PATH, IF WEIGHT OF EDGES IS EITHER 0 OR 1 
--> NOTE :- at a particular time queue has only two level elements (i.e x & x+1)
--> in this we use dequeue before pushing child in dequeue we will check its level is 0 or 1 w.r.t to other child
--> if it is 0 we will use push_front and operate it at first bcz we operate small level element first in bfs....

************* CODE-CHEF QUESTON ****************
a directed graph(may or may not br tree) with vertices 1 to N is given
you have to find the shortest no. of edges to be reversed to make a path b/w 1 to N ....

********  INPUT  *********
7 7             -->    no. of vertices & edges
1 2
3 2
3 4
7 4
6 2
5 6
7 5             --> two given verices 

*******  output  = 2  ********
*/

const int N = 1e5+7;
const int INF = 1e3+9;

vector<pair<int,int>> g[N];
vector<int> lev(N, INF);
int n,m;

int bfs()
{
    deque<int> q;
    q.push_back(1);
    lev[1] = 0;

    while(!q.empty())
    {
        int cur_v = q.front();
        q.pop_front();

        for(auto &child : g[cur_v]){
            int child_v = child.first;
            int wt = child.second;
            if(lev[cur_v] + wt < lev[child_v]){     //  MAIN LOGIC 
                lev[child_v] = lev[cur_v] + wt;
                if(wt==1){
                    q.push_back(child_v);
                }
                else{
                    q.push_front(child_v);
                }
            }
        }

    }

    if (lev[n]==INF){return -1;}  // if there is no path possible (e.g --> disconnected graph)
    else { return lev[n];}
}

int main()
{
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        if (x==y) {continue;}    //given in question 
        g[x].push_back({y,0});  // generaly directed has only 1 time input..  (let normal graph has edge wt = 0)
        g[y].push_back({x,1});  // but we are making a reverse drirected graph ourself for ans. purpose (let reverse graph has edge wt = 1)
    }
    cout<<bfs();

}