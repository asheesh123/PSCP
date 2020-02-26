#include<iostream>
using namespace std;
struct abc
{
	int *a;
	float b;
};
int main()
{
	abc v;
	int c=10;
	v.a=&c;
	v.b=40.5;
	cout<<v.a<<" "<<v.b<<endl;
	cout<<*v.a;
	return 0;
}
