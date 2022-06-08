#include <bits/stdc++.h>
using namespace std;

/*
N solo (1 to N)campers wandering around a city, they start combining with others.
find the diff b/w largest nd smallest group..

*****  INPUT  *****
N, Q        --> N NO. OF CAMPERS & Q QUERIES OF GROUP COMBINIG
X1, Y1..
.......
.......     --> Q QUERIES

******  OUTPUT *****
ans -> 1 line i.e final diff.

*/

const int N = 1e5+7;
int parent[N];
int Size[N];

multiset<int> sizes;

void make(int v){
    parent[v] = v;
    Size[v] = 1;
    sizes.insert(1);
}

int find(int v){                                      // Recursion 
    if(v==parent[v]) { return v; }
    else { return parent[v] = find(parent[v]); }     // path compression 
}

void merge(int a, int b){
    sizes.erase(sizes.find(Size[a]));
    sizes.erase(sizes.find(Size[b]));

    sizes.insert(Size[a] + Size[b]);
}

void Union(int a, int b){    // use uppercase U bcz union is a reserved keyword..
    a = find(a);
    b = find(b);
    if( a!=b ){   
        if(Size[a] < Size[b]) { swap(a,b); }      // logic for weighted union..
        parent[b] = a;                            // we may also use if else statement..
        merge(a,b);
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
    if(sizes.size() == 1){cout<<0;}
    else{
        int mn = *(sizes.begin());
        int mx = *(--sizes.end());
        cout<<mx-mn;
    }
    cout<<"\n";
   
}
/*
***** SAMPLE INPUT ******
2 1
1 2
***** output = 0  ****
*/