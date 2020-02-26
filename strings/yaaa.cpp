#include<iostream>
using namespace std;
class B
{
	int a;
	public:
		int b;
		void getab();
		int geta(void);
		void showa(void);
	};
	class D:public B
	{
		int c;
		public:
			void mul(void);
			void display(void);
		};
		void B::getab(void)
		{
	cout<<"enter a b";
	cin>>a>>b;
		}
		int B::geta()
		{
			return a;
		}
		void B::showa()
		{
			cout<<"a="<<a<<endl;
		}
		void D::mul()
		{
			c=b*geta();
		}
		void D::display()
		{
			cout<<"a="<<geta()<<endl;
			cout<<"b="<<b<<endl;
			cout<<"c="<<c<<endl;
		}
		int main()
		{
			D d;
			d.mul();
			d.display();
			d.mul();
			d.display();
			return 0;
		}
