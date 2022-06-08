// STRING OPERATION (supports addition, =, !=, comparison)
// C++ TREATS SMALL AND CAPITAL LETTERS DIFFRENTLY
// string access

#include <bits/stdc++.h>

using namespace std;

int main()
{

// addition operation
// string s= "HELLO";
// string S= "WORLD";
// cout << S+s;

// string access and altering
string str="hello";
string str2="world";
str2[3]='r';
cout<<str[0]<<" "<<str2.size()<<" "<<str2<<endl;

for(int i = 0; i< str.size(); ++i){
    cout<< str[i]<<endl;
}

return 0;
}