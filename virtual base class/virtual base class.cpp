#include<iostream>
using namespace std;
class A
{
	public:
		int a=10;
};
class B1:virtual public A
{
	public:
		int b1=20;
};
class B2:public virtual A
{
	public:
		int b2=30;
};
class C:public B1,public B2
{
	public:
		int c=40;
		void disp()
		{
			cout<<"a="<<a<<" b1="<<b1<<" b2="<<b2<<" c="<<c;
		}
};
int main()
{
	C ob;
	ob.disp();
	return 0;
}
