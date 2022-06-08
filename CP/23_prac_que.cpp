//  ENTER A NUMBER IF LAST DIGIT OF PRODUCT OF THE DIGITD OS NUMBER IS 2,3,5 PRINT YES ELSE NO


#include <bits/stdc++.h>
using namespace std;
int main()
{	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int product = 1;
		for(int i=0; i<n; ++i)
		{
			int x;
			cin>>x;
			product = product*x;

		}
		int digit = product%10;
		if((digit == 2) || (digit == 3) || (digit == 5))
		{
			cout<<"YES\n";
		}
		else 
		{
			cout<<"NO\n";
		}
	}
}
