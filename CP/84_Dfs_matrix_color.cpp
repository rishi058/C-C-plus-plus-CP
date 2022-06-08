#include <bits/stdc++.h>
using namespace std;

/*
applying dfs in matrix graph --
--> in matrix form genrally a vertex is conneted to max --> up, down, right, left,  (sometimes diagonally also)

--> in matrix form you can also imagine the graph by looking at matrix only..
--> BASIC Q.1 --> check that a path exist b/w edge diagonal elements..(newton school)
--> Q.2 --> FLOOD FILL
--> Q.3 --> CHECK THE NO. OF CONNECTED COMPONENTS..

Q.2 --> 
A IMAGE OF MATRIX IS GIVEN, EACH ELEMENT REPRESENT A COLOR, INTIAL COLORS ARE GIVEN , YOU WILL BE GIVEN A POS TO REPLACE IT WITH NEW given COLOR if thy're not same,
FIND FINAL IMAGE IF COLOR SPREAD UP,DOWN,LEFT,RIGHT IF NEIGHBOUR COLOR INITIALLY SAME

*****INPUT******
1 1 1
1 1 0
1 0 1
*****OUTPUT******
2 2 2
2 2 0
2 0 1

ANS 2. --> HERE MATRIX IS IN THE FORM OF VECTOR 0F VECTORS 
*/

void dfs(int i, int j, int initial_color, int new_color, vector< vector<int>> &image){
    int n=image.size();
    int m=image[0].size();
    if(i<0 || j<0) {return;}
    if(i >=n || j>=m){return;}
    if(image[i][j] != initial_color) {return;}

    image[i][j] = new_color;  //main working 

    dfs(i-1, j, initial_color, new_color, image);
    dfs(i, j-1, initial_color, new_color, image);
    dfs(i+1, j, initial_color, new_color, image);
    dfs(i, j+1, initial_color, new_color, image);

}

int main()
{
    int row, col;
    cin>>row>>col;

    vector<vector<int>> matrix;

    for(int i=0; i<row; i++){
        vector<int> temp; 
        temp.clear();
        for(int j=0; j<col; j++){
            int x; cin>>x;
            temp.push_back(x);
        }
        matrix.push_back(temp);
    }

    int given_row, given_col, neww_col;
    cin>>given_row>>given_col>>neww_col;

    int old_color = matrix[given_row][given_col];

    if(old_color != neww_col){
        dfs(given_row, given_col, old_color, neww_col, matrix);
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}   
/*
*******sample  input for  this  code************
3 3
1 1 1
1 1 0
1 0 1
1 1 2
**********  Q.3 *********(H.W)
find the no. of connected components-->

INPUT 1. -->
1 1 1 1 0
1 1 0 1 0
1 1 0 0 0
0 0 0 0 0
OUTPUT 1. --> 1

INPUT 2. -->
1 1 0 0 0
1 1 0 0 0
0 0 1 0 0
0 0 0 1 1
output 2. --> 3

HINT --> find the no. of time dfs runs (prev dfs)


*/   