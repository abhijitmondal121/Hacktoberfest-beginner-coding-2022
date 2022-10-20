//GCD of array elements
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int GCD(int a,int b)
{
	if(a==0)
		return b;
	return GCD(b%a,a);
}

int main()
{
    int t;
    cin>>t;     //t for multiple test cases
	while(t--)
	{
		ll int n,res=0;
		cin>>n;
		ll int a[n];  // array of elements
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			res=GCD(res,a[i]);
		}
		cout<<res<<"\n";  //gcd of array elements
	}
	return 0;
}
