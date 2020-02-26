#include<iostream>
using namespace std;

struct abc
{
	int a;
	float b;
};
void disp(abc);
int main()
{
	struct abc v={100,50.5};
	disp(v);
	return 0;
}
void disp(struct abc x)
{
	cout<<x.a<<" "<<x.b;
}
