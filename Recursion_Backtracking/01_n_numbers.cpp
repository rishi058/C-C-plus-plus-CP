#include <bits/stdc++.h>
using namespace std;
/*

Recursion --> 2 types
1. Direct Recusrion...
        a.) Head Recursion         -->  Recursion is call at the end of the code..
        b.) Tail Recursion         -->  Recursion is call at the begining of the code..
        c.) Tree Recursion         -->  When Recursion is call more than once { tree increses exponentially - (no. of calls)^n  n = base case } 
        d.) Nested Recursion       -->  Similar to nested loop { e.g -> fun(fun(n+1)) }


2. Indirect Recursion...
        --> circular tree(loop type).

A base is imp in all recursive program..
Recursion memory is stored in a Stack.. (last in first out, sand_bag)..
Recursion Tree is useful for simpler understanding..Therefore draw recursion tree for each program..

*/

vector<int> v1,v2;


void reverse_numbers(int x){
    if(x==0){return;}
    cout<<x<<" ";
    reverse_numbers(x-1);        // Head Recursion ..
}


void reverse_numbers2(int x){
    if(x==0){return;}
    v1.push_back(x);
    reverse_numbers2(x-1);
}

void numbers(int x){
    if(x==0){return;}
    numbers(x-1);       // pehle 5 se 1 tak recursive call hote gya nd stack me store hote gya , fir sab print hote gya..
    cout<<x<<" ";       // Tail Recursion..
}

void numbers2(int x){
    if(x==0){return;}
    numbers2(x-1);       
    v2.push_back(x);
}


int main()
{
    cout<<"Enter any Number : ";
    int n; cin>>n;
    reverse_numbers(n);
    cout<<"\n";
    numbers(n);
    cout<<"\n";

    reverse_numbers2(n);
    numbers2(n);

    for(int x : v1){
        cout<<x<<" ";
    }
    cout<<"\n";
     for(int x : v2){
        cout<<x<<" ";
    }


}