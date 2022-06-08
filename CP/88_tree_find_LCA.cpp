#include <bits/stdc++.h>
using namespace std;

/*
LOWEST COMMON ANCESTOR (LCA) --> 
finding lca b/w two nodes.

*/

const int N = 1e5+10;
vector<int> g[N];
int par[N];  //array used to store parents..


void dfs(int v, int p=-1)
{
    par[v] = p;
    for(int child : g[v]){
        if(child==p){continue;}
        dfs(child, v);
    }
}


vector<int> pathh(int v)
{
    vector<int> ans;
    while( v != -1){
        ans.push_back(v);
        v = par[v];
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int n; cin>>n;  // n = no. of v.

    for(int i=0; i<n-1; i++){   // n-1 = no. of edges..
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);

    }

    int x,y; 
    cin>>x>>y;

    dfs(1);
    vector<int> path_x = pathh(x);  //storing all value of vertices related to x
    vector<int> path_y = pathh(y);

    int mn_len = min(path_x.size(), path_y.size());

    int lca = -1;
    for(int i=0; i<mn_len; i++){
        if(path_x[i]==path_y[i]){  // calculating first commom element (after reversing..)
            lca = path_x[i];
        }
        else{break;}
    }

    cout<<lca<<endl;

    // for(int x : path_x){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // for(int x : path_y){
    //     cout<<x<<" ";
    // }

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
6 12
--> 6,12 = x,y whose vertices we can found...
*/
