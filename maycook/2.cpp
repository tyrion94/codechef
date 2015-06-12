#include<iostream>
using namespace std;
int main()
{
	int x1,testcases;
	cin >> testcases;
	for(x1=0;x1<testcases;x1++)
	{
		int i,j,n;
		cin >> n;
		int d[55],w[100];
		for(i=0;i<100;i++)
			w[i]=0;
		for(i=0;i<n;i++)
		{
			cin >> d[i];
			w[d[i]-1]++;
		}
		j=0;
		for(i=0;i<100;i++)
		{
			if(w[i]>0)
				j++;
		}
		cout << j << endl;
	}
	return 0;
}
