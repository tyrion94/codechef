#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int x1,testcases;
	
	cin >> testcases;
	for(x1=0;x1<testcases;x1++)
	{
		int count[26];
		int maxdiff,i,j,k,l,index,cc;
		char temp;cc=0;
		for(i=0;i<26;i++)
			count[i]=0;
		char a[100010];
		cin >> a;
		l=0;
		while(a[l]!=0)
			l++;
		for(i=0;i<l;i++)
		{
			temp=a[i]-'a';
			index=int(temp);
			count[index]++;
		}
		if(l%2==1)
			k=l+1;
		else
			k=l;
		for(i=0;i<26;i++)
		{
			if(count[i]>k/2)
			{
				cc=1;
				break;
			}
		}
		if(cc==1)
			cout << "-1" << endl;
		else
		{
			int flag=0;
			for(i=0;i<l-1;i++)
			{
				if(a[i]==a[i+1])
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
				cout << a << endl;
			else
			{
				char last[26];
				int len=0;
				int n1,n2,n3;
				char need;
				for(i=0;i<26;i++)
				{
					if(count[i]!=0)
					{
						last[len]='a'+i;
						len++;
					}
				}
				last[len]='\0';
			//	cout << len << last << endl;
				for(i=0;i<len;i++)
				{
					for(j=i+1;j<len;j++)
					{
						n1=int(last[i]-'a');
						n2=int(last[j]-'a');
						if(count[n1]<count[n2])
						{
							need=last[i];
							last[i]=last[j];
							last[j]=need;
						}
					}

				}
				//cout << last << endl;
				int n4=0;
				int xxx;
				sort(count,count+26);
				int count2[26];
				for(i=0;i<26;i++)
				{
					count2[i]=count[25-i];
				}
				j=0;
				//cout << len <<endl;
				//cout << count2 << endl;
				for(i=0;i<len;i++)
				{
					while(count2[j]!=0)
					{
						a[n4]=last[i];
						n4++;
						count2[j]--;
					}
					j++;
				}
				//cout << a << endl;
				char b[100000];
				b[l]='\0';
				int round=0;
				k=0;
				for(i=0;i<l;i++)
				{
					b[k]=a[i];
					k=k+2;
					if(k>l-1)
					{
						round++;
						k=round;
					}
				}
				cout << b << endl;
			}

		}
			
		
	}
	return 0;
}
