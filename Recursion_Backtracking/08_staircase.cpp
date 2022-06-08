#include <bits/stdc++.h>
using namespace std;
/*
you are standing at the bottom-ground, in-front of u there are n staircase.
you have to go to the nth staircase. at a time you can climb 1 or 2 or 3 stairs.
Find the no. of ways in which you can go to the nth staircase.

E.g   -->   4-staircase,   Soln :-
{1,1,1,1} {1,1,2} {2,1,1} {1,2,1} {1,3} {3,1} {2,2} --> 7 is ans.

HINT :-
think that you are at top and descending down the stairs...
3 ways to descend...;
draw recursion treee....

*/

int jumps(int n){
    if(n<0){return 0;}
    if(n==0){return 1;}
    return jumps(n-1) + jumps(n-2) + jumps(n-3);
}
int main()
{
    cout<<"Enter the value of n : ";
    int n; cin>>n;
    for(int i=1; i<10; i++){
        cout<<"\nJumps : "<<jumps(i);
    }
}


