#include<iostream>
#include<algorithm>
using namespace std;
int bst(int a[],int x,int n)
{
	int lo,hi,mid;
	lo=0;hi=n-1;mid=(lo+hi)/2;
	while(lo!=hi)
	{
		if(a[mid]==x)
			break;
		else if(a[mid]>x)
		{
			hi=mid-1;
			lo=lo;
			mid=(lo+hi)/2;
		}
		else if(a[mid]<x)
		{
			lo=mid+1;
			hi=hi;
			mid=(lo+hi)/2;
		}
	}
	mid=(lo+hi)/2;
	return mid;
}
int main(int argc, char const *argv[])
{
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		cin >> n;
		int m[100010],x[100010],index[100010];
		int i,j,k,max,xi,yi;
		for(i=0;i<n;i++)
		{
			cin >> m[i];
			for(j=0;j<m[i];j++)
			{
				cin >> xi >> yi;
				if(j==0)
				{
					x[i]=xi;
				}
				else
				{
					if(xi>x[i])
						x[i]=xi;
				}
			}
		}
		/*for(i=0;i<n;i++)
			cout << x[i] << endl;*/
		int temp[100010],tempindex[100010];
		for(i=0;i<n;i++)
			temp[i]=x[i];
		sort(temp,temp+n);
		for(i=0;i<n;i++)
		{
			tempindex[i]=bst(temp,x[i],n);
		}
		/*for(i=0;i<n;i++)
			index[i]=i;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(x[i]>x[j])
				{
					index[i]=j;
					index[j]=i;
				}
			}
		}*/
		for(i=0;i<n-1;i++)
			cout << tempindex[i] << " ";
		cout << tempindex[n-1] << endl;
	}
	return 0;
}
