#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ss, subarray;


void Index_subset (int num, int size, vector<int> subset) {
    if ( num > size ){
        ss.push_back(subset);
    }
   else {
       subset.push_back(num);
       Index_subset(num+1, size, subset);
       subset.pop_back();
       Index_subset(num+1, size, subset);
   }
}


void printSubArrays(vector<int> arr, int start, int end)
{
    // Stop if we have reached the end of the array
    if (end == arr.size())
       return ;
    // Increment the end point and start from 0
    else if (start > end)
        printSubArrays(arr, 0, end + 1);
    // Print the subarray and increment the starting point
    else {
        cout << "[";
        for (int i = start; i < end; i++)
            cout << arr[i] << ", ";
        cout << arr[end] << "]" << endl;
        printSubArrays(arr, start + 1, end);
    }
    return;
}

int main() {

    cout<<"Enter any Number  x : ";
    int n; cin>>n;

    vector<int> v,v1(n);

    cout<<"\nEnter x numbers : ";
    for(int i=0; i<n; i++){cin>>v1[i];}

    Index_subset(0,n,v);
    printSubArrays(v1,0,0);
    //cout<<"FOR INDEX PURPOSE (finding subset of things) : \n";

    // for(auto h : ss){
    //     cout<<"[ ";
    //     for(int x : h){
    //         cout<<x<<" ";
    //     }
    //     cout<<"] ";
    // }

    cout<<"\n";

    for(auto h : subarray){
        cout<<"[ ";
        for(int x : h){
            cout<<x<<" ";
        }
        cout<<"] ";
    }



    


}

