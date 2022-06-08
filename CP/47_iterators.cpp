#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {1,2,3,4,5,6,7};

    for(int x : v ){     //short-hand to print containers.
        cout<<x<<" ";    //x is copy of vector elements.  use &x to print direct from address
    }                    //&x is used when we have to alter x.
    cout<<endl;
    for(int &x : v ){ 
        x++;
    cout<<x<<" ";
    }  
    cout<<endl;   

    vector<pair<int,int>> v_p = {{1,2},{3,4},{5,6}};
    for(pair<int,int> &value : v_p){
        cout<<value.first<<","<<value.second<<" ";
    }
    /*
    vector<int> :: iterator it -->  ignore it and use auto in every loop befor it;

    for(auto it = v.begin(); it!=v.end(); it++){  
    cout<<(*it)<<" ";                          
    }

    no -- use || shorthand best :-)
    */
}