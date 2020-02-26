#include<iostream>
using namespace std;
class abc
{
	public:
		int a;
		float b;
		void disp();
		void getdata();		
};
int main()
{
	abc v;
	v.getdata();
	v.disp();
	return 0;
}
void abc::getdata()
{
	cout<<"enter two values :";
	cin>>a>>b;
}
void abc::disp()
{
	cout<<a<<" "<<b;
}
 
