#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v, vv;
const int N = 1e5+7;
vector<bool> chosen(N,0);


void search(vector<int> permutation,vector<int> values) {  // repeated permutation is stored in case of identical elements.

    if (permutation.size() == values.size()) {
        // process permutation
        vv.push_back(permutation);
    } else {
        for (int i = 0; i < values.size(); i++) {
            if (chosen[i]) { continue; }
            chosen[i] = true;
            permutation.push_back(values[i]);
            search(permutation, values);
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}



void getPerm(string str, int index){     // recursion with swap approach more easy...
    if(index>=str.length()){
        cout<<str<<endl;
        return;
    }                                   // repeated permutation is stored in case of identical elements...

    for(int i=index; i<str.size(); i++){
        swap(str[index],str[i]);
        getPerm(str,index+1);

        swap(str[index],str[i]);
    }
}

/*
1. swap 0th element with 0 to all element, them swap 1st element with 0 to all..   ..upto all elemnt ..
2. better understanding with recursion tree.
3. use -> set<string> ss to store distinct string...
*/



int main()
{
    cout<<"Enter size of array : ";
    int n; cin>>n;
    vector<int> permutation,empty;

    cout<<"Enter elements of array : ";
    for (int i = 0; i < n; i++){
        int l; cin>>l;
        permutation.push_back(l);
    }

//*****************  ITERATIVE  METHOD  **********************  // best approach  -->

    do{
        // process permutation
        v.push_back(permutation);
    }while (next_permutation(permutation.begin(),permutation.end()));  // INBUILT FUNCTION..


//**************************************************************

    search(empty,permutation);  // recursive method

    for(auto s : v){
        cout<<"[ ";
        for(int c : s){
            cout<<c<<" ";
        }
        cout<<"] ";
    }

    cout<<"\n";

    for(auto s : vv){
        cout<<"[ ";
        for(int c : s){
            cout<<c<<" ";
        }
        cout<<"] ";
    }

    cout<<"\nEnter a string : ";
    string j; cin>>j;
    getPerm(j,0);
}