#include<iostream>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		long long int n;
		cin >> n;
		long long int a[100010];
		long long int i,k,memalloc,diff;k=0;memalloc=0;
		for(i=0;i<n;i++)
		{
			cin >> a[i];
			if(a[i]>memalloc)
			{
				diff=a[i]-memalloc;
				k=k+diff;
				memalloc=a[i];
			}
			if(a[i]<memalloc)
				memalloc=a[i];
		}
		cout << k << endl;
	}
	return 0;
}
