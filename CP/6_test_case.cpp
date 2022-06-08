// NESTED LOOP
// TEST CASES

#include <bits/stdc++.h>

using namespace std;

int main()
{

int t, i, j, k, b;

cin>>t;                             // test case

for(int test=0; test<t; ++t)        // test case syntax
{
cin>>i;

for ( k=1 ; k <= i; k++)
{
    for(j=1; j<=k; ++j)
    {
    cout<<"*";
    }

    cout<<endl;
    }

for ( k=i, k >= 1; --k;)
{
    for(j=k; j>=1; --j)
    {
    cout<<"*";
    }
    cout<<endl;
}
}
// cin>>b; cout<<++b;
}