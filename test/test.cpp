#include<iostream>
using namespace std;
int main()
{
	
	int flag=0;
	while(1)
	{
		int c;
		cin >> c;
		if(c==42)
			flag=1;
		if(flag==0)
			cout << c << endl;
		else
			break;
	}
	return 0;
}
