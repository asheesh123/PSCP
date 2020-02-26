#include<iostream>
using namespace std;
struct abc
{
	int a;
	float b;
};
int main()
{
	abc v={10,10.5};
	abc *p=&v;
	cout<<v.a<<" "<<v.b<<endl;
	cout<<p->a<<" "<<p->b<<endl;
	cout<<(*p).a<<" "<<(*p).b;
	return 0;
}
