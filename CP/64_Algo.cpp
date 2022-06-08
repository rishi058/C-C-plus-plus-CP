#include <bits/stdc++.h>
using namespace std;

/*
all of, none of, any of..  --> gives true or false;
they are can be used in lambda function

*/

int main()
{   

    //ex of lambda func..  -->
    cout<< [](int x){return x+2;}(2) << endl;  //output 4;
    cout<< [](int x, int y){return x+y;}(4,7) << endl;  //output 11;

    auto sum = [](int x, int y){return x+y;};  
    cout<<sum(2,3)<<endl;

    //lambda uses..   -->
    
    vector<int> v = {2,3,5};
    cout<< all_of(v.begin(), v.end(), [](int x ){return x > 0;} ) ; //output 1(i.e true) bcz all +ve.

    cout<<endl;

    vector<int> v1 = {2,-3,5};
    cout<< any_of(v1.begin(), v1.end(), [](int x ){return x < 0;} ) ;  //output 1(i.e true) any 1 is -ve

    cout<<endl;

    vector<int> v2 = {2,3,5};
    cout<< none_of(v2.begin(), v2.end(), [](int x ){return x > 0;} ) ;  //output 0(i.e false)

    cout<<endl;

    vector<int> v3 = {2,4,6,6,112,42};
    cout<< all_of(v3.begin(), v3.end(), [](int x ){return x%2==0;} ) ; //output 1(i.e true) bcz all are even;
    




}