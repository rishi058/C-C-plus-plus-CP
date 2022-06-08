#include <bits/stdc++.h>
using namespace std;

/*
//////////////  ADJENCY MATRIX GRAPH  + BFS  ////////////

A MATRIX IS GIVEN, IN EACH hour - each element becomes equal to the
max of the neighbour element..
find in how many hour matrix will have all values equal to max..
***********  CODE - CHEF - QUE - (SNSOCIAL)  // PROBLEM CODE *************

********APPROACH********
TAKE ALL MAX ELEMENT OF MATRIX AT HEIGHT 0 ROOT ELEMENTS..
MAKE THE NEIGHBOUR ELEMENT ITS CHILD....
FIND THE MAX LEVEL OF ALL ELEMENT OF GRAPH..(I.E THE ANS....)

*/

const int N = 1e2+5;
const int inf = 1e4+10;
int val[N][N];
int vis[N][N];
int lev[N][N];

vector<pair<int,int>> moves = { {0,1}, {0,-1}, {1,0}, {-1,0}, {1,1}, {-1,1}, {1,-1}, {-1,-1} } ;

bool isvalid(int i, int j, int n, int m){
    if(i>=0 && j>=0 && i<n && j<m) {return true;}
    else {return false;}
}

void reset(int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            lev[i][j] = 0;
            vis[i][j] = inf;
        }
    }
}

int bfs(int mx, int n, int m){

    queue<pair<int,int>> q;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mx==val[i][j]){
                q.push({i,j});
                lev[i][j] = 0;
                vis[i][j] = 1;
            }
        }
    }

    int ans=0;
    while( !q.empty() )
    {
        auto v = q.front();
        int v_x = v.first;
        int v_y = v.second;
        q.pop();
        for(auto movement : moves ){
            int child_x = movement.first + v_x;
            int child_y = movement.second + v_y;

            if( isvalid(child_x, child_y, n, m)==false || vis[child_x][child_y]==1){continue;}
            
            else{
                q.push({child_x, child_y});
                lev[child_x][child_y] = lev[v_x][v_y] + 1;
                vis[child_x][child_y] = 1;
                ans = max(ans, lev[child_x][child_y]);
            }

        }
    }

    return ans;
}


int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        reset(n,m);
        int mx = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>val[i][j];
                mx = max(mx, val[i][j]);
            }
        }

        cout<<bfs(mx, n, m);
        cout<<endl;


    }
    return 0;
}
/*
************ INPUT ************
3
2 2
1 1
1 1
2 2
1 1 
1 2
3 4
1 2 1 2
1 1 1 2
1 1 2 2

**********  OUTPUT  ***********
0
1
2

*/
