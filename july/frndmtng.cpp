#include <iostream>
#include <stdio.h>
#include <iomanip> 
using namespace std;
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		long double T1,T2,t1,t2;
		cin >> T1 >> T2 >> t1 >> t2;
		long double probability,arrival_probability_1,arrival_probability_2,temp;
		temp=0.000001;
		arrival_probability_1=1/T1;
		arrival_probability_2=1/T2;
		if(t1==0&&t2==0)
		{
			//cout << fixed;
			if(T1>=T2)
				printf("%.6Lf\n",arrival_probability_2);
			else
				printf("%.6Lf\n",arrival_probability_1);
		}


	}
	return 0;
}