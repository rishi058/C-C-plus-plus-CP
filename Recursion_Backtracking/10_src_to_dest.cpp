#include <bits/stdc++.h>
using namespace std;

/*
given a matrix & src & dest coordinates, you can move up and right only(repeatition of prev move is allowed)
find the total no. of ways by which you can go to dest..
*********   input    *********
4 5  (row nd col)
4 1  (src)
2 5  (dest)
*/

set<string> ss;

bool valid(int x, int y, int n, int m){
    if(x>=0 && y>=0 && x<n && y<m){return true;}
    else {return false;}
}

void ways(int row, int col, int src_x, int src_y, int dest_x, int dest_y, string route){
    if(src_x==dest_x && src_y==dest_y){
        ss.insert(route);
        return ;
    }

    if(valid(src_x+1, src_y, row, col)){
        route.push_back('R');
        ways(row,col,src_x+1,src_y,dest_x,dest_y,route);
        route.pop_back();

    } 

    if(valid(src_x, src_y+1, row, col)){
        route.push_back('U');
        ways(row,col,src_x,src_y+1,dest_x,dest_y,route);
        route.pop_back();
    }


}

int main()
{
    cout<<"Enter row & col : ";
    int n,m; cin>>n>>m;
    cout<<"\nEnter src : ";
    int a,b; cin>>a>>b;
    cout<<"\nEnter dest : ";
    int c,d; cin>>c>>d;

    string s="";

    ways(n,m, a,b, c,d, s);

}