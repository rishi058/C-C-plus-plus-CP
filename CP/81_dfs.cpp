#include <bits/stdc++.h>
using namespace std;

const int N=1e5+7;
vector<int> g[N];

bool vis[N];

void dfs_sample(int vertex){
    /*
    take action on vertex after entering vertex                   -->niche jaa raha h
    */
    for(int child : g[vertex]){
        /*
        take action on child before entering child node           -->niche jaa raha h
        */
        dfs_sample(child);
        /*
        take acton on child after entering child node              -->upar aa raha h 
        */
    }
    /*
    take action on vertex before exiting the vertex                 -->upar aa raha h
    */
}

void dfs(int vertex){  //DFS TO PRINT PARENT AND CHILD

   cout<< vertex << " -> ";
   vis[vertex]=true;

    for(int child : g[vertex]){

        cout<<"parent's : " <<vertex<< " child : " <<child<<"\n\n";
        if(vis[child]) {continue;}

        dfs(child);
       
    }
   
}

int main()
{
    int n,m;
    cin>>n>>m; 
    for(int i=0; i<m; i++){
        int v1, v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1);  //OBSERVE THE OUTPUT WITH ITS FIG..
}
/*   **********INPUT EXAMPLE**********
6 9
1 3
1 5
3 5
3 4
3 6
3 2
2 6
4 6
5 6
*/