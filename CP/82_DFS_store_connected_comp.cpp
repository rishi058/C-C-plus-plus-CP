#include <bits/stdc++.h>
using namespace std;

// TO  FIND NO. OF CONNECTED COMPONENTS -->

const int N=1e5+7;
vector<int> g[N];

vector<vector<int>> cc; // container to store connected components... --> addtional for knowledge..
vector<int> current_cc;

bool vis[N];

void dfs(int vertex){  // -->  DFS

   vis[vertex]=true;
    current_cc.push_back(vertex);
    for(int child : g[vertex]){

        if(vis[child]) {continue;}

        dfs(child);
       
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

     int ct=0;
     for(int i=1; i<=n; i++){  // graph has components from 1 to n..
         if(vis[i]) {continue;}
         current_cc.clear();   //clear..
         dfs(i);
         cc.push_back(current_cc); //add..
         ct++;
     }
     cout<<ct<<endl; // or use cc.size();

     for(auto c_cc : cc){
         for(int vertex : c_cc){
             cout<<vertex<<" ";
         }
         cout<<endl;
     }

}
/* *******HACKER - EARTH - QUE ***********
INPUT -->
8 5  (N= No. of comp.) (e = no. of edges)
1 2
2 3
2 4
3 5
6 7 
*/