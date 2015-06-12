#include<iostream>
using namespace std;
int main()
{
	long long int x1,testcases;
	cin >> testcases;
	for(x1=0;x1<testcases;x1++)
	{
		long long int n,k;
		cin >> n >> k;
		char a[100100],b[100100];
		cin >> a;
		long long int h,i,j,flag,count;
		for(i=0;i<n;i++)
			b[i]=a[i];
		flag=0;
		count=0;
		for(i=0;i<n-k;i++)
		{
			flag=0;
			for(j=i+1;j<i+k+1;j++)
			{
				if(a[i]!=a[j])
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{

				
				if(k!=1)
				{
					if(a[i+k+1]!=a[i+k])
					{
						if(a[i+1]=='0')
							a[i+k-1]=a[i+k-1]-'0'+'1';
						else
							a[i+k-1]=a[i+k-1]-'1'+'0';
					}
					else
					{
						if(a[i+1]=='0')
							a[i+k]=a[i+k]-'0'+'1';
						else
							a[i+k]=a[i+k]-'1'+'0';
					}
					
				}
				else
				{	
					
					
					if(a[i]==a[i-1])
					{
						if(a[i]=='0')
							a[i]=a[i]-'0'+'1';
						else
							a[i]=a[i]-'1'+'0';
					}
					else
					{
						if(a[i+1]=='0')
							a[i+1]=a[i+1]-'0'+'1';
						else
							a[i+1]=a[i+1]-'1'+'0';
					}
					

				}
			}
			
		}
		count=0;
		for(i=0;i<n;i++)
		{
			if(a[i]!=b[i])
				count++;
		}
		cout << count << endl;
		cout << a << endl;
	}
	return 0;
}
	
