#include <bits/stdc++.h>
using namespace std;

//************ ASKED IN FLIPKART **************

/*
GIVEN AN UNDIRECTED TREE WITH N NODES FROM 1 TO N. (I.E N-1 EDGES)
EACH NODE HAS A CERTAIN WEIGHT.
DELETE AN EDGE SUCH THAT PRODUCT B/W SUM OF WEIGHT OF TWO SUBTREES IS MAX..

RETURN MAX POSSIBLE PRODUCT MODULO 10^9 + 7;
NOTE :- the tree is rooted at 1.

******  INPUT  ******
4
10 5 12 6                       ---> WEIGHTS OF 1,2,3,4 VERTICES
1 2                             --> CONECTED VERTICES
2 4
4 3

******WITH EDGES DELETION METHOD A LOT OF QUESTION CAN BE MADE ********
E.G (1) -->  DELETE A EDGE SUCH THAT PRODUCT OF CO-PRIME NO. B/W TWO SUBTREE IS MAX
etc......

//////////////// ****  ANSWER  ****  ///////////////

FIRST STORE SUM OF EACH SUBTREE USING PRE COMPUTATION 
TAKE EACH NODE FIND ITS 1ST SUM OF SUBTREE, 2ND SUM OF SUBTREE = TOTAL SUM - 1ST SUM;

*/

const int N = 1e5+10;
const int M = 1e9+7;
vector<int> g[N];
int par[N];                 //array used to store parents..
int val[N];
int sub_tree[N];

void dfs(int vertex, int par)
{
    sub_tree[vertex] += val[vertex];
    for(int child : g[vertex]){
        if(child == par) {continue;}
        dfs(child, vertex);
        sub_tree[vertex] += sub_tree[child];  // NOTE :- sum is calculated from bottom to top
    }                                         // therefore :- root node has total sum of tree..
}

int main()
{
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        cin>>val[i];
    }

    for(int i=0; i<n-1; i++){
        int x,y;
        cin>>x>>y;

        g[x].push_back(y);
        g[y].push_back(x);
    }

    dfs(1,0);

    long long ans = 0;
    // for(int i=1; i<=n; i++){
    //     cout<<sub_tree[i]<<" ";
    // }
    for(int i=2; i<=n; i++){
        int part1 = sub_tree[i];
        int part2 = sub_tree[1] - part1;
        //cout<<part1<<" "<<part1<<endl;
        ans = max( ans, (part1 * 1LL * part2));
    }

    cout<<ans;

}