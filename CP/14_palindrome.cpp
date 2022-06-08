// CHECKING A STRING IS PALINDROME OR NOT


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    string str, str_rev;
    cin>>str;
    for(i=str.size()-1 ; i>=0; --i){
        str_rev=str_rev+str[i];
    }

    if (str == str_rev)
    { 
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}