#include<iostream>
#include<string>

long long int power(long long int a,long long int b,long long int c)
{
	a=a%c;
	long long int result=1;
	while(b>0)
	{
		if(b&1)
			result=(result*a)%c;
		a=(a*a)%c;
		b>>=1;
	}
	return result;
}
using namespace std;
int main()
{
	long long int n,k,q;
	cin >> n >> k >> q;
	long long int a,b,c,d,e,f,r,s,t,m,a1;
	cin >> a >> b >> c >> d >> e >> f >> r >> s >> t >> m >> a1;
	long long int l1,la,lc,lm,d1,da,dc,dm;
	cin >> l1 >> la >> lc >> lm >> d1 >> da >> dc >> dm;
	long long int array[100000];
	long long int i,j;
	array[0]=a1;
	for(i=1;i<n;i++)
	{
		if(power(t,i+1,s)<=r)
		{
			array[i]=power(array[i-1],2,m);
			array[i]=(a%m*array[i])%m;
			array[i]=array[i]+(((b%m)*(array[i-1]%m))%m)+(c%m);
			array[i]=array[i]%m;
		}
		else
		{
			array[i]=(((d%m)*(power(array[i-1],2,m)))%m)+(((e%m)*(array[i-1]%m))%m)+(f%m);
			array[i]=array[i]%m;
		}
	}
	long long int l[100000],ra[100000];
	for(i=0;i<q;i++)
	{
		l1=((((la%lm)*(l1%lm))%lm)+(lc%lm))%lm;
		d1=((((da%dm)*(d1%dm))%dm)+(dc%dm))%dm;
		l[i]=l1;
		if(l1+k+d1>=n)
			ra[i]=n-1;
		else
			ra[i]=l1+k+d1-1;
	}
	long long int dishes[100000];
	long long int x1,x2,x3,x4,temp;
	for(x1=0;x1<q;x1++)
	{
		temp=array[l[x1]];
		for(x2=l[x1]+1;x2<=ra[x1];x2++)
		{
			if(temp>array[x2])
				temp=array[x2];
		}
		dishes[x1]=temp;
	}
	long long int sum,mult,remainder;
	remainder=1000000007;
	sum=dishes[0];mult=dishes[0];
	for(i=1;i<q;i++)
	{
		sum=sum+dishes[i];
		mult=(mult%(remainder))*(dishes[i]%remainder);
	}
	mult=mult%remainder;
	cout << sum << " " << mult << endl;
	return 0;
}
