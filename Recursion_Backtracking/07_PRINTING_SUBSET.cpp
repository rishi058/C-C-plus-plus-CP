#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ss;

void Index_subset (int num, vector<int>& value, vector<int> &subset) {
    if ( num > value.size()-1 ){
        ss.push_back(subset);
    }
   else {
       subset.push_back(value[num]);
       Index_subset(num+1, value, subset);
       subset.pop_back();
       Index_subset(num+1, value, subset);
   }
}
// CAN ALSO BE USED TO STORE COMBINATIONS OF SIZE X,  nCx....

int main() {

    cout<<"Enter a Number 'x' : ";
    int n; cin>>n;
    vector<int> empty;
    cout<<"\nEnter x Number's : ";
    vector<int> value;
    for(int i=0; i<n; i++){
        int c; cin>>c;
        value.push_back(c);
    }

    Index_subset(0,value,empty);
    cout<<"\nFOR INDEX PURPOSE (finding subset of things) : \n";

    cout<<"\n";
    for(auto h : ss){
        cout<<"[ ";
        for(int x : h){
            cout<<x<<" ";
        }
        cout<<"] ";
    }

}

