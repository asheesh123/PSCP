#include<iostream>
using namespace std;
int main()
{
	int *p;
	int a=10;
	p=&a;
	cout<<a<<endl;
	cout<<*p<<endl;
	cout<<p<<endl;
	cout<<&a<<endl;
	*p=20;
	cout<<a<<" "<<*p<<endl;
	return 0;
}
