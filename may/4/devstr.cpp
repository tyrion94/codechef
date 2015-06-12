#include<iostream>
using namespace std;
int main()
{
  long long int test; cin>>test;
  while(test--)
  {
	long long int n,k;
	char a[100000];
	cin>>n>>k;
	cin>>a;
	long long int ctr ;
	int flag ;
	if(k == 1);
	else
	{
		for(long long int i = 0 ;i<n-k;i++)
		{
			ctr = flag = 0;
			for(long long int j = i+1;j<i+k+1;j++)
			{
				if(a[i]!=a[j])
				{
					flag = 1;	
					break;
				}
			}
			if(flag == 0)
			{
				if(a[k+i+1]!=a[k+i])
				{
					if(a[k+i-1] == '0')a[k+i-1] = '1';
					else a[k+i-1] = '0';
				}
				else
				{
					if(a[k+i] == '0') a[k+i] = '1';
					else a[k+i] = '0';
				}
				i=i+k;
			}
		}	
	}
	cout<<a<<endl;
	
  }
return 0;
}
