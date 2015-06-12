#include<iostream>
using namespace std;
int main()
{
	int x1,testcases;
	cin >> testcases;
	for(x1=0;x1<testcases;x1++)
	{
		int a[100001];
		int i,j,k,l,count0,count1,n;
		count0=0;count1=0;
		cin >> n;
		for(i=0;i<n;i++)
			cin >> a[i];
		for(i=0;i<n;i++)
		{
			if(a[i]==0)
				count0++;
			else
				count1++;
		}
		if(count1%2==0)
			cout << count0 << endl;
		else
			cout << count1 << endl;
	}
	return 0;
}
