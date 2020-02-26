#include<iostream>
using namespace std;
void disp(float);
struct abc
{
	int a;
	float b;
};
int main()
{
	struct abc v={100,50.5};
	disp(v.b);
	return 0;
}
void disp(float x)
{
	cout<<x;
}
