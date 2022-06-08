
// A C++  program to count all possible paths
// from top left to bottom right
 
#include <iostream>
using namespace std;
 
// Returns count of possible paths to reach cell at row
// number m and column number n from the topmost leftmost
// cell (cell at 1, 1)

int x;
int y;

int numberOfPaths(int m, int n)
{
    // If either given row number is first or given column
    // number is first
    if (m == x || n == y)
        return 1;
 
    // If diagonal movements are allowed then the last
    // addition is required.
    return numberOfPaths(m - 1, n) + numberOfPaths(m, n - 1);
    // + numberOfPaths(m-1, n-1);
}
 
int main()
{
    // this question doesn't have any condn on movements..
    // NOTE :- src<dest always..
    cout<<"Enter src : ";
    cin>>x>>y;
    cout<<"\nEnter dest : ";
    int m,n; cin>>m>>n;
    cout<<"\nTotal no. of shortest path : ";
    cout << numberOfPaths(m, n);
    return 0;
}