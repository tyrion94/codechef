#include<iostream>
using namespace std;
long long int abs(long long int a,long long int b)
{
	if(a>=b)
		return a-b;
	else
		return b-a;
}
int main()
{
	int n,q,index,i1,i2,x1,x2;
	cin >> n;
	int i;
	long long int x[100001],y[100001];
	for(i=0;i<n;i++)
	{
		cin >> x[i];
		cin >> y[i];
	}
	/*for(i=0;i<n;i++)
	{
		cout << y[i] << endl;
	}*/
	cin >> q;
	char a;long long int tempx,tempy,ans,tempans;
	for(i=0;i<q;i++)
	{
		cin >> a;
		if(a=='U')
		{
			cin >> index >> tempx >> tempy;
			x[index]=tempx;
			y[index]=tempy;
		}
		else
		{
			cin >> i1 >> i2;
			ans=0;
			for(x1=i1;x1<i2;x1++)
			{
				for(x2=x1+1;x2<=i2;x2++)
				{
					tempans=abs(x[x1],x[x2])+abs(y[x1],y[x2]);
					if(tempans>ans)
						ans=tempans;
				}
			}
			cout << ans << endl;
			
		}
	}
	return 0;
}
