#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int ct=0;
    int sum = 0;
    for(int i=1; i<=n; ++i){        //code to calculate factors of a no..
        if(n%i ==0){                //brute-force
            cout<< i << endl;       // O(N) time complexity...
            ct++;
            sum +=i;
        }
    }
    cout<< ct <<" "<<sum <<"\n\n";

    int ct1=0;
    int sum1 = 0;
    for(int i=1; i*i<=n; ++i){                  //code to calculate factors of a no..
        if(n%i ==0){                            //optimized
            cout<< i << " "<< n/i <<endl;       // O(sqrt(N)) time complexity...
            ct1+=2;
            sum1 += i + n/i;
            if(n/i == i){sum1 = sum1 - i ; ct1--;}
        }
    }
    cout<< ct1 <<" "<<sum1 <<endl;

    //to find only count and sum of factors a formula
    //is available which is most optimized.. video no. -->70.
}