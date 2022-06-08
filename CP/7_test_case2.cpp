// NESTED LOOP
// TEST CASES 2 **********USING WHILE LOOP****************

#include <bits/stdc++.h>

using namespace std;

int main()
{

int t, i, j, k, b;

cin>>t;                             // test case

while(t--)                          // test case syntax 2
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
cin>>b; cout<<++b;
}