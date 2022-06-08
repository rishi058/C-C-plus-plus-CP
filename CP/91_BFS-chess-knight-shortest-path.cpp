#include <bits/stdc++.h>
using namespace std;

/*
******************* BFS ON MATRIX TYPE GRAPH **********************

IN A NORMAL 8x8 CHESS A KNIGHT LOCATION AND ITS DESTINATION IS GIVEN YOU HAVE TO FIND
OUT THE SHORTEST POSSIBLE NO. OF STEPS TO REACH THE DESTINATION.

THE CHESS HAS 1 T0 8 named ROWS & a TO h named COLUMNS...

///////////  **** INPUT ****  ////////////
3               --> no. of test cases
a1 h8           --> (initial pos)  (destination)   
a1 c2
h8 c3

///////////  ******  APPROACH  ********  ////////////////
FIRST SUPPOSE CHESSBOARD IS A 8x8 PLANE WITH COORDINATES.
CONVERT INPUT INTO COORDINATES..

RUN bfs TO CALCULATE ALL POSSIBLE COORDINATES KNIGHT CAN GO (hint :- knight has the property to go any coordinate);

using bfs we can find the dist b/w intial pos & destination ,
as bfs gives only shortest path possible ..
*/

const int N = 1e5+7;
int vis[8][8];
int lev[8][8];

int getX(string str){            //  --> for x-axis..
    return str[0]-'a';       // 'a' - 'a' = 0  | 'b' - 'a' = 1....|.....'h' - 'a' = 7  |
}   

int getY(string str){           // --> for y axis..
    return str[1]-'1';       // '1' - '1' = 0 |  '2' - '1' = 1 ...|...'8' - '1' = 7  |
}

vector<pair<int,int>> mov = {
    {-1,2},  {1,2},
    {-1,-2}, {1,-2},  // there are 8 possible movements by a knight when its intial pos is 0,0...
    {2,-1},  {2,1},
    {-2,-1}, {-2,1}
};

bool isValid(int x, int y){
    if ( x>=0 && y>=0 && x<8 && y<8 ) return true;
    else return false;
}

void reset(){
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            lev[i][j] = 0;
            vis[i][j] = 0;
        }
    }
}

void bfs(string source, string destination)
{
    int sourceX=getX(source);
    int sourceY=getY(source);

    int destX = getX(destination);
    int destY = getY(destination);

    queue< pair<int,int> > q;
    q.push({sourceX, sourceY}) ;
    vis[sourceX][sourceY] = 1;
    lev[sourceX][sourceY] = 0;

    while(!q.empty())
    {
        pair<int,int> current_vertex = q.front();
        int x = current_vertex.first;
        int y = current_vertex.second;
        q.pop();
        
        for(auto movement : mov ){
            int childX = movement.first + x;
            int childY = movement.second + y;
            if(!isValid(childX, childY)) {continue;}
            if(!vis[childX][childY]){
                q.push({childX, childY});
                lev[childX][childY] = lev[x][y] + 1; 
                vis[childX][childY] = 1;
            }
        }

        if(lev[destX][destY]!=0){break;}

    }
    cout << lev[destX][destY] << "\n" ;
}



int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s1, s2;
        cin>>s1>>s2;
        bfs(s1,s2);
        reset();
    }
}