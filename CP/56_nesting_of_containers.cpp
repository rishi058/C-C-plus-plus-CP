#include <bits/stdc++.h>
using namespace std;


/*
input-->                        output-->
3                               rishi raj
rishi raj 5                     5
1 2 3 4 5                       1 2 3 4 5
kumar vaibhav 7                 kumar vaibhav         --> in lexographical order..
11 22 33 44 55 66 77            7
abhishek anurag 2               11 22 33 44 55 66 77
99 88                           abhishek anurag
                                2
                                99 88
*/


int main()
{
    map < pair < string, string >, vector<int> > m ;
    int n; cin>>n; 
    for(int i=0; i<n; i++){
        string fn, ln;  //fn = first name\ ln = last name
        int ct;
        cin>>fn>>ln>>ct;
    for(int j=0; j<ct; j++){
        int x;
        cin>>x;
        m[{fn,ln}].push_back(x);
    }
    }
    for(auto &pr : m){
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout<<full_name.first<<" "<<full_name.second<<endl;
        cout<<list.size()<<endl;
        for(auto &element : list){
            cout<<element <<" ";
        }
        cout<<endl<<endl;
    }


}