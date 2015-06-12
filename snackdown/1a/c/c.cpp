#include<iostream>
using namespace std;
int main()
{
	int x1,testcases;
	cin >> testcases;
	for(x1=0;x1<testcases;x1++)
	{
		int n;
		int c[50];
		int i,j,k,count,flag;
		cin >> n;
		count=0;flag=0;
		for(i=0;i<n;i++)
		{
			cin >> c[i];
			count=count+c[i];
			if(c[i]>=n)
				flag=1;
		}
		if(count>n||flag==1)
		{
			cout << "-1" << endl;
		}
		else
		{

			int a[50];
			for(i=0;i<n;i++)
				a[i]=0;
			int count2=0;i=0;j=1;
			while(count2<n)
			{
				while(c[i]==0)
				{
					i++;
					if(i==n)
						i=0;
				}
				if(j==n)
					j=0;
				while(a[j]!=0)
				{
					j++;
					if(j==n)
						j=0;
				}
				a[j]=i+1;
				count2++;
				c[i]--;
				j++;
		
				
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
