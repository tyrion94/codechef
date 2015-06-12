#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int testcases,x1;
	cin >> testcases;
	for(x1=0;x1<testcases;x1++)
	{
		int n,i,j,k,min,max;
		int a[100010],mina[100010],maxa[100010];
		cin >> n;
		for(i=0;i<n;i++)
		{
			cin >> a[i];
		}
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			mina[i]=a[i];
			maxa[i]=a[i];
		}
		mina[n]=0;maxa[n]=0;
		min=0;max=0;
		for(i=0;i<n;i=i+1)
		{
			if(mina[i]-mina[i-1]==1&&mina[i+1]-mina[i]==1)
			{
				mina[i-1]=0;
				mina[i+1]=0;
				mina[i]=0;
				min++;
			}
		}
		for(i=0;i<n;i++)
		{
			if(mina[i]!=0)
			{
				if(mina[i+1]-mina[i]==1)
					mina[i+1]=0;
				mina[i]=0;
				min++;
			}
		}
		for(i=0;i<n;i++)
		{
			if(maxa[i]!=0)
			{
				if(maxa[i+1]-maxa[i]==1)
					maxa[i+1]=0;
				maxa[i]=0;
				max++;
			}
		}
		cout << min << " " << max << endl;

	}
	
	return 0;
}
