#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> maze,vis,bb;        // bb --> for storing info of blocked path.
vector<string> v;

bool valid(int x, int y){
    if(x>=0 && y>=0 && x<n && y<m && vis[x][y]==0 && bb[x][y]==0){return true;}
    else {return false;}
}

void route(int x, int y, string ans){
    if(x==n-1 && y==n-1){
        v.push_back(ans);
        return;
    }
    
    vis[x][y]=1;

    int new_x = x+1;
    int new_y = y;
    if(valid(new_x, new_y)){               //down
        ans.push_back('D');
        route(new_x,new_y,ans);
        ans.pop_back();
    }

    new_x = x; new_y = y-1;
    if(valid(new_x, new_y)){             // Left
        ans.push_back('L');
        route(new_x,new_y,ans);
        ans.pop_back();
    }

    new_x = x-1; new_y = y;
    if(valid(new_x, new_y)){
        ans.push_back('U');
        route(new_x,new_y,ans);
        ans.pop_back();    
    }

    new_x = x; new_y = y+1;
    if(valid(new_x, new_y)){
        ans.push_back('R');
        route(new_x,new_y,ans);
        ans.pop_back();
    }

    vis[x][y]=0;

  

}


int main()
{
    cin>>n>>m;

    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<m; j++){
            int x; cin>>x;
            temp.push_back(x); 
        }
        vector<int> temp2(m,0);
        vis.push_back(temp2);
        bb.push_back(temp2);
        maze.push_back(temp);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(maze[i][j]==0){bb[i][j]=-1;}
        }
    }


    string ans="";
    route(0, 0, ans);
    for(auto str : v){
       cout<<str<<"\n";
    }

}
/*
Given a maze in form of matrix(n X m) -->
1 --> represents path.
0 --> represents no path(blocked by wall)

***************   INPUT   **************
4 4
1 1 1 1
1 1 0 1
0 1 1 1
0 0 1 1
*/