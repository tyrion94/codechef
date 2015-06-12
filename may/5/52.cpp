#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> q;
	q.push_back(11);
	q.push_back(21);
	q.push_back(32);
	list<int>:: iterator it=q.begin();
	it++;
	cout << *it << endl;
	return 0;
}
