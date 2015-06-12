#include<iostream>
using namespace std;
int c=1000000000;
long long int memory[4010][4010];
long long int ncr(int n,int r)
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
long long int memory2[4010][4010]; long long int memory3[4010];
int main()
{
	int test;
	//memory[2000][1000]=ncr(2000,1000);
	cin >> test;
	while(test--)
	{
		int n,m,i,j,k;
		cin >> n >> m;
		//long long int memory2[2010][2001];
		/*for(i=0;i<2010;i++)
		  {
		  for(j=0;j<2010;j++)
		  {
		  memory2[i][j]=0;
		  memory3[i][j]=0;
		  }
		  }*/
		//int memory2[2010][2010];
		//int ans=0;int sum=m;
		int x;
		//memory3[0][0]=0;
		for(i=1;i<=n;i++)
		{
			for(j=0;j<=m;j++)
			{
				if(i==1)
				{
					if(j==0)
					{
						memory2[i][j]=1;
						memory3[j]=1;
					}
					else
					{
						memory2[i][j]=ncr(j+m-1,m-1);
						memory3[j]=(memory3[j-1]+memory2[i][j])%c;
					}
					//cout << "memory2["<< i << "][" << j << "]=" << memory2[i][j] << endl;
					//cout << "memory3["<< i << "][" << j << "]=" << memory3[i][j] << endl;
				}
				else
				{
					x=ncr(m-1+j,m-1);
					memory2[i][j]=(x*(memory3[j]))%c;
					//cout << "memory2=" << memory2[i][j] << endl;
					if(j==0)
						memory3[j]=memory2[i][j];
					else
						memory3[j]=(memory2[i][j]+memory3[j-1])%c;
					//cout << "memory2["<< i << "][" << j << "]=" << memory2[i][j] << endl;
					//cout << "memory3["<< i << "][" << j << "]=" << memory3[i][j] << endl;
				}
			}
		}
		/*for(i=0;i<=m;i++)
		  {
		  ans=(ans+(memory2[n][i]))%c;
		  }*/
		cout << memory3[m] << endl;
		 
	}
	return 0;
}
