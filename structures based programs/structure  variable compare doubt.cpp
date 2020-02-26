#include<iostream>
using namespace std;
struct abc
{
	int a;
	float b;
};
int main()
{
	struct abc v1,v2;
	v1.a=10;
	v1.b=10.5;
	v2=v1;
	cout<<v1.a<<" "<<v1.b<<endl;
	cout<<v2.a<<" "<<v2.b<<endl;
	return 0;
}
