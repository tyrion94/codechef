#include<iostream>
#include<algorithm>
long long int power(long long int a,long long int b,long long int c)
{
	a=a%c;
	long long int result=1;
	while(b>0)
	{
		if(b&1)
			result=(result*a)%c;
		a=(a*a)%c;
		b>>=1;
	}
	return result;
}
using namespace std;
int main()
{
	int x1,testcases;
	long long int finalans[5];
	cin >> testcases;
	for(x1=0;x1<testcases;x1++)
	{
		long long int n;
		cin >> n;
		long long int a[100000];
		long long int i,j,tem;
		for(i=0;i<n;i++)
			cin >> a[i];
		sort(a,a+n);
		/*for(i=1;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
				if(a[j]>a[i])
				{
					tem=a[j];
					a[j]=a[i];
					a[i]=tem;
				}
			}
		}*/
	
		long long int minsum,maxsum,finalsum,temp1,temp2;
		long long int c;
		c=1000000007;
		minsum=0;maxsum=0;
		for(i=n-1;i>=0;i--)
		{
			temp1=power(2,i,c);
			maxsum=maxsum+(((a[i]%c)*temp1)%c);
		}
		for(i=0;i<n;i++)
		{
			temp2=power(2,n-1-i,c);
			minsum=minsum+(((a[i]%c)*temp2)%c);
		}
		finalsum=(maxsum%c)-(minsum%c);
		finalsum=finalsum%c;
		finalans[x1]=finalsum;
	}
	for(x1=0;x1<testcases;x1++)
		cout << finalans[x1] << endl;
	return 0;
}
