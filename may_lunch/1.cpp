#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
		long long int n,k;
		cin >> n >> k;
		long long int a[100010];
		long long int i,j,count,l;
		count=0;
		for(i=0;i<n;i++)
		{
			cin >> a[i];
		}
		for(i=0;i<n;i++)
		{
			j=a[i]%k;
			l=a[i]/k;
			if(j!=0&&l!=0)
			{
				if(j<=k/2)
				{
					count=count+j;
				}
				else
				{
					count=count+k-j;
				}
			}
			else if(j!=0&&l==0)
			{
				count=count+k-j;
			}

		}
		cout << count << endl;

	}
	return 0;
}
