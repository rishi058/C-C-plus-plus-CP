#include <bits/stdc++.h>
using namespace std;

bool chk_sort(vector<int> v, int index){

    if(index == v.size()){return true;}

    if(v[index] < v[index-1]){return false;}

    return chk_sort(v, index+1);

}


int main()
{
    vector<int> v1 = { 1, 2, 3, 4, 5, 6, 7, 9 };
    vector<int> v2 = { 11, 23, 13, 44, 15, 26, 77 };
    vector<int> v3 = {0, 0, 0, 0};

    bool ans1 = chk_sort(v1, 1);
    bool ans2 = chk_sort(v2, 1);
    bool ans3 = chk_sort(v3, 1);

    cout<<ans1<<"\n"<<ans2<<"\n"<<ans3;

}

//     >= 