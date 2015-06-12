#include<iostream>
using namespace std;
long long int abs(long long int a,long long int b)
{
	if(a>=b)
		return a-b;
	else
		return b-a;
}
long long int fact(long long int a)
{
	if(a==0)
		return 1;
	else
		return a*fact(a-1);
}
long long int m=1000000007;
int main()
{
	long long int test;
	cin >> test;
	while(test--)
	{
		long long int n,k;
		cin >> n >> k;
		long long int ans,t1,t2,t3,k1,k2,k3;
		ans=0;
		for(t1=1;t1<=n;t1++)
		{
			for(t2=1;t2<=n;t2++)
			{
				k1=abs(t1,t2);
				ans=ans%m+((fact(k+k1))/((fact(k))*(fact(k1))))%m;
			}
		}
		ans=ans%m;
		cout << ans << endl;
		

	}
	return 0;
}
