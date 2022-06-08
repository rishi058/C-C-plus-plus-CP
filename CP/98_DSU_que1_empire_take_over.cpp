#include <bits/stdc++.h>
using namespace std;

/*
intially there are N empires from 1 to N. By the time these empires have taken over other,
when i invade j all of j empire become the part of i nd it is renamed as i.
find total no. of empires left at last.
******  INPUT ******
N    =      no. of empires.
K    =      no. of take overs.
i j   -->   K lines of i j..
...

Note :- also be solved using DFS
*/

const int N = 1e5+7;
int parent[N];
int Size[N];


void make(int v){
    parent[v] = v;
    Size[v] = 1;
}

int find(int v){                                      // Recursion 
    if(v==parent[v]) { return v; }
    else { return parent[v] = find(parent[v]); }     // path compression 
}

void Union(int a, int b){    // use uppercase U bcz union is a reserved keyword..
    a = find(a);
    b = find(b);
    if( a!=b ){   
        if(Size[a] < Size[b]) { swap(a,b); }      // logic for weighted union..
        parent[b] = a;                            // we may also use if else statement..
        Size[a] += Size[b];
    }
}

int main()
{
    int n,k; cin>>n>>k;
    for(int i=1; i<=n; i++){
        make(i);
    }
    while(k--)
    {
        int u,v;
        cin>>u>>v;
        Union(u, v);
    }

    int connected_comp = 0;
    // connected components = no. of nodes whose parent node is himself.
    for(int i=1; i<=n; i++){
        if(find(i)==i ){connected_comp++;}
    }
    cout<<connected_comp;
}
/*
***** SAMPLE INPUT ******
4
2
1 2
4 1
*/