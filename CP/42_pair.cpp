#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,string> p;
    // cin>>p.first;    // i/o
    // cout<<p.first;
    // p = make_pair(2, "abc");
    p = {2, "abcd"};
    //pair<int, string> p1 = p;  //make copy of p
    pair<int, string> &p1 = p;  //now both are connected, now if we change the value of p1 then p automatically changes.. 
    p1.first = 3;
    cout<<p.first<<" "<<p.second<<endl;
    //pair is used to make relation between two things(arrays,no,string,etc)
    int a[] = {1,2,3};
    int b[] = {2,3,4};
    pair<int,int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};
    swap(p_array[0], p_array[2]);
    for(int i =0 ; i<3; i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

}