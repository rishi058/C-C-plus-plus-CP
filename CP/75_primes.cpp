#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;

    bool is_prime = true;       //code to check prime
    for(int i=2; i<n; i++){     //brute-force
        if(n==1){is_prime=false; break;}
        else if(n%i == 0){           //O(N) time complexity
            is_prime = false;
            break;
        }
    }
    cout<<is_prime<<"\n";

    bool is_prime2 = true;                      //code to check prime
    for(int i=2; i<sqrt(n); i++){               //optimized
        if(n==1){is_prime2=false; break;}
        else if(n%i == 0){                      //O(sqrt(N)) time complexity
            is_prime2 = false;
            break;
        }
    }
    cout<<is_prime2;
}