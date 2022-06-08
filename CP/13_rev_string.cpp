// printing reverse of string


#include <bits/stdc++.h>

using namespace std;

int main()
{
int i;
string str;
cin>>str;
for(i=str.size()-1; i>=0; --i){
    cout<<str[i];
}


return 0;
}