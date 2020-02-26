#include<iostream>
using namespace std;
class A
{
	public:
		void disp()
		{
			cout<<"base function "<<endl;
		}
};
class B:public A
{
	public:
		void disp()
		{
			cout<<"derived function "<<endl;
		}
};
int main()
{
	class B ob;
	//ob.disp();
	ob.A::disp();
	return 0;
}
