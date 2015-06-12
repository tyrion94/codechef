#include<iostream>
using namespace std;
int c=1000000000;
int memory[4010][4010];
int ncr(int n,int r)
{
	if(memory[n][r]!=0)
	{
		memory[n][n-r]=memory[n][r];
		return memory[n][r];
	}
	else if(memory[n][n-r]!=0)
	{
		memory[n][r]=memory[n][n-r];
		return memory[n][r];
	}
	else
	{
		if(r==0 || n==r)
		{

			memory[n][n]=1;memory[n][0]=1;
			return memory[n][0];	
		}
		else if(r==1)
			{
				memory[n][1]=n;
				return memory[n][1];
			}
		else
		{
			memory[n][r]=(ncr(n-1,r)+ncr(n-1,r-1))%c;
			return memory[n][r];
		}
	}
}
long long int memory2[4010][4010];
long long int no_of_martrix_with_sum(int n,int m,int sum)
{
	if(memory2[n][sum]!=0)
		return memory2[n][sum]%c;
	else if(n==1)
	{
		memory2[n][sum]=ncr(sum+m-1,m-1);
		return memory2[n][sum]%c;
	}
	else if(sum==0)
	{
		memory2[n][sum]=1;
		return memory2[n][sum];
	}
	else
	{
		int x=ncr(m-1+sum,m-1);
		memory2[n][sum]=(x*(no_of_martrix_with_sum(n-1,m,sum))%c)%c;
		for(int i=sum-1;i>=0;i--)
		{
			memory2[n][sum]=(memory2[n][sum]+((x)*(no_of_martrix_with_sum(n-1,m,i)))%c)%c;
		}
		return memory2[n][sum];
	}
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n,m,i,j;
		cin >> n >> m;
		for(i=0;i<4010;i++)
		{
			for(j=0;j<4010;j++)
				memory2[i][j]=0;
		}
		int ans=0;
		for(i=m;i>=0;i--)
			ans=(ans+(no_of_martrix_with_sum(n,m,i))%c)%c;
		cout << ans << endl;
		

	}
	return 0;
}