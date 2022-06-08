#include <bits/stdc++.h>
using namespace std;

/*
*****************  GOOGLE - QUESTION --> codeforces -- Shinjuki and power grid  *************
you are given n cities(1 to n) and its coordinates. cost of biulding power station in each city is given.(array c[])
and cost of making wire connection b/w 2 cities is k[i]+k[j]*dist where array k[] is given and dist b/w to city is manhatan dist.

*********  INPUT  *********
N
x1, y1
x2, y2..
.....
xN, yN
c[N]
k[N]

*********  OUTPUT  ********
total cost
no. of power stations.
cities having power stations.
no. of connections
connection pair 1
connection pair 2
.....
....

******************************************  APPROACH  *****************************************
let there be n nodes of cities, make all possible connections b/w cites with wt of edges = cost of wiring ..
then calculate MST, but we have to also take power stations in cosideration, so before calculating MST, make N extra nodes with coordinates(0,n)
no overlapping of cities is possible as (x & y > 0) -> given constraints nd each city will have diff coordinates of
power grid no cycle will be made wt of edges b/w extra nodes nd there city  is cost of building power grid.. 
NOW CALCULATE MST.
*/

const int N = 2e3+7;
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
    int n;
    cin>>n;

    vector<pair<int,int>> cities(n+1);

    for(int i=1; i<=n; i++){
        cin >> cities[i].first >> cities[i].second;
    }

    vector<int> c(n+1), k(n+1);

    for(int i=1; i<=n; i++){
        cin >> c[i];
    }

    for(int i=1; i<=n; i++){
        cin >> k[i];
    }

    vector<pair<long long ,pair<int,int>>> edges;
   
    for(int i=1; i<=n; i++){
        edges.push_back( {c[i], {0,i} } );
    }

    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            int dist = abs(cities[i].first - cities[j].first)  + abs(cities[i].second - cities[j].second);
            long long cost = dist * 1LL * (k[i]+k[j]);
            edges.push_back({cost, {i,j}});
        }
    }

    sort(edges.begin(), edges.end());

    for(int i=1; i<=n; i++){
        make(i);
    }

    long long total_cost = 0;
    vector<int> power_stations;
    vector<pair<int,int>> connections;

    for(auto &edge : edges){
        int wt = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;
        if(find(u)==find(v)){continue;}  // checking for cycle..
        Union(u,v);
        total_cost += wt;
        if(u==0 || v==0){
            power_stations.push_back(max(u,v));
        }else{
            connections.push_back({u,v});
        }
    }
    cout<<total_cost<<"\n";

    cout<<power_stations.size()<<"\n";
    for(int stations : power_stations){
        cout<<stations<<" ";
    }

    cout<<"\n";

    cout<<connections.size()<<"\n";
    for(auto &connection: connections){
        cout<<connection.first << " " <<connection.second<<"\n";
    }


}
/*
************  INPUT 1 *********
3
2 3 
1 1
3 2
3 2 3
3 2 3
************ OUTPUT 1 *********
8
3
2 1 3
0

************  INPUT 2 *********
3
2 1
1 2
3 3
23 2 23
3 2 3
************ OUTPUT 2 *********
27
1
2
2
1 2
2 3
*/
