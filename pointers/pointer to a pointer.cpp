#include<iostream>
using namespace std;
int main()
{
	int a=10,*p;
	int **q;
	p=&a;
	q=&p;
	cout<<a<<endl;
	cout<<*p<<endl;
	cout<<**q<<endl;
	cout<<&a<<endl;
	cout<<p<<endl;
	cout<<*q<<endl;
	cout<<&(*p)<<endl;
	cout<<&p<<endl;
	cout<<q;
	return 0;
}
