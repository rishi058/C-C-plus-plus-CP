#include <bits/stdc++.h>
using namespace std;
/*
Given Q queries Q<=1e5;
in each given query V,
find sum of the subtree V & no. of even no. in V..

note-->sum of a leaf node is the value of its vertex
*/

const int N=1e5+7;
vector<int> g[N];
int subtree_sum[N];
int even[N];
// int val[N];

void dfs(int vertex, int par=0){
    /*
    take action on vertex after entering vertex
    */

   if(vertex%2==0){even[vertex]++;}
   subtree_sum[vertex] += vertex;  //  += val[vertex]

    for(int child : g[vertex]){
        /*
        take action on child before entering child node
        */
        if(child==par) {continue;}
        
        dfs(child, vertex);
        /*
        take acton on child after entering child node
        */
       subtree_sum[vertex] += subtree_sum[child];
       even[vertex] += even[child];

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

    dfs(1);  //calling dfs for pre-computing everything..

    for(int i=1; i<=n; i++){                        //  ignore queries print for every vertex
        cout<<i<<" subtree -->"<<subtree_sum[i]<<" "<<even[i]<<endl;
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