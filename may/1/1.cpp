#include<iostream>
using namespace std;
int main()
{
	int x1,cases;
	cin >> cases;
	for(x1=0;x1<cases;x1++)
	{
		int n;
		cin >> n;
		int a[100000];
		int i,flag,j,temp,fin,min;
		flag=0;min=100000;
		for(i=0;i<n;i++)
		{
			cin >> a[i];
			if(a[i]<2)
				flag=1;
			if(a[i]<min)
				min=a[i];
		}
		if(n==1)
		{
			if(a[0]>=2)
				cout << "2" << endl;
			else
				cout << "-1" << endl;
		}
		else if(flag==1)
			cout << "-1" << endl;
		else
		{
			/*for(i=1;i<n;i++)
			{
				for(j=0;j<i;j++)
				{
					if(a[j]<a[i])
					{
						temp=a[j];
						a[j]=a[i];
						a[i]=temp;
					}
				}
			}*/
			fin=0;
			for(i=0;i<n;i++)
			{
				fin=fin+a[i];
			}
			fin=fin-min+2;
			cout << fin << endl;
		}
		
	}
	return 0;
}
