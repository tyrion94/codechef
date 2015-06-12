#include<iostream>
#include<math.h>
using namespace std;
long long int hcf(long long int a ,long long int b)
{
	if(b%a==0)
		return a;
	else
	{
		long long int x;
		x=(b%a);
		hcf(x,a);
	}
}
int main()
{
	int x1,testcases;
	cin >> testcases;
	for(x1=0;x1<testcases;x1++)
	{
		long long int i,j,k,n,a,b,c,gcd;
		cin >> a >> b;
		c=hcf(a,b);
		while(c!=1)
		{
			b=b/c;
			c=hcf(b,c);
		}
		if(b==1)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
