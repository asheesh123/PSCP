#include<iostream>
using namespace std;
struct exp
{
	int a;
	float b;
};
int main()
{
	exp e;
	e.a=10;
	e.b=10.5;
	cout<<e.a<<" "<<e.b;
	return 0;
}
