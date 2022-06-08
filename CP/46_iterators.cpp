#include <bits/stdc++.h>
using namespace std;
//maps and sets don't have indexing like arrays and vectors so we use iterator for them. 
//iterators are used to access,alter or perform operation on values of containers..
//it is a structure like pointers.. || points elements of containers..
int main()
{
    vector<int> v = {1,2,3,4,5,6};
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> :: iterator it1,it2;
    it1 = v.begin();        //point first element.
    it2 = v.end();         //point next to last element
    cout<<(*(it1)) <<endl;
    cout<<(*(it2-1)) <<endl;
    for(it1 = v.begin(); it1 != v.end(); it1++){
        cout<<(*it1)<<" ";
    }

    //it++ --> next iterator
    //it+1 --> next location
    //it+1 is valid for vector is valid for vectors bcz here next iterator is on next location..
    //but in maps and sets it++ is valid only.

    vector<pair<int,int>> v_p = {{1,2},{3,4},{5,6}};
    vector<pair<int,int>> :: iterator it;
    for(it = v_p.begin(); it!=v_p.end(); it++){
        cout<<(*it).first << " " << (*it).second <<endl;
    }

    for(it = v_p.begin(); it!=v_p.end(); it++){
        cout<< (it->first) << " " << (it->second) <<endl; //shorthand
    }
}