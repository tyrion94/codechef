#include<iostream>
using namespace std;
int main()
{
	int x1,testcases;
	cin >> testcases;
	for(x1=0;x1<testcases;x1++)
	{
		int n,len;
		int c[55],b[55];
		int i,j,k,count,nonzero,flag;
		cin >> n;
		count=0;flag=0;
		nonzero=0;len=0;
		for(i=0;i<n;i++)
		{
			cin >> c[i];
			count=count+c[i];
			if(c[i]>=n)
				flag=1;
			if(c[i]!=0)
			{
				b[len]=i+1;
				len++;
			}
		}
		nonzero=len;
		if(count!=n||flag==1)
		{
			cout << "-1" << endl;
		}
		else
		{

			int a[55];k=0;
			/*for(i=0;i<nonzero;i++)
			{
				while(c[k]==0)
				{
					k++;
				}
				b[i]=k+1;
				k++;
			}*/
			/*for(i=0;i<nonzero;i++)
				cout << b[i] << " ";
			cout << endl;*/
			for(i=0;i<n;i++)
				a[i]=0;
			int count2=0;i=0;j=1;k=0;
			while(count2<n)
			{
				while(c[i]!=0)
				{
					if(a[j]==0)
					{
						a[j]=b[k];
						c[i]--;
						count2++;
					}
					j++;
					if(j==n)
						j=0;
				}
				i++;
				if(c[i]!=0)
					k++;

		
				
			}
			/*for(i=0;i<n;i++)
				cout << c[i] << " ";
			cout << endl;
			for(i=0;i<n;i++)
			{
				if(a[i]==0)
					a[i]=n;
			}*/
			for(i=0;i<n-1;i++)
			{
				cout << a[i] << " ";
			}
			cout << a[n-1] << endl;
			
		}
	}
	return 0;
}
