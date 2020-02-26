#include<iostream>
using namespace std;
class area
{
	public:
		int r;
		int a;
		void getradius()
		{
			cout<<"enter radius";
			cin>>r;
		}
		void getside()
		{
			cout<<"enter side";
			cin>>a;
		}
		void areacir()
		{
			cout<<"area of the circle="<<3.14*r*r<<endl;	
		}
		void areasqr()
		{
			cout<<"area of the square="<<a*a<<endl;	
		}
};
int main()
{
	area s,c;
	s.getradius();
	s.areacir();
	s.getside();
	s.areasqr();
	return 0;
}
