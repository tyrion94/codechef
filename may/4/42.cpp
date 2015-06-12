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
		char a[100100],b[100100],c[100100];
		cin >> a;
		long long int h,i,j,flag,count;
		flag=0;
		count=0;
		if(k>1)
		{	
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
					count++;
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
					i=i+k;
				}
			}
			cout << count << endl;
			cout << a << endl;
		}
		else
		{
			int c1,c2;
			c1=0;c2=0;
			for(i=0;i<n;i++)
			{
				if(i%2==0)
				{
					b[i]='0';
					c[i]='1';
				}
				else
				{
					b[i]='1';
					c[i]='0';
				}
			}
			b[n]='\0';c[n]='\0';
			for(i=0;i<n;i++)
			{
				if(a[i]!=b[i])
					c1++;
				if(a[i]!=c[i])
					c2++;
			}
			if(c1<=c2)
			{
				cout << c1 << endl;
				cout << b << endl;
			}
			else
			{
				cout << c2 << endl;
				cout << c << endl;
			}

		}
	}
	return 0;
}
	
