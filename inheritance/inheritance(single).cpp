#include<iostream>
using namespace std;
class shape
{
	public:
		int width,height;
		void getdata(int h,int w)
		{
			width=w;
			height=h;
		}
};
class rectangle:public shape
{
	public:
		void disparea()
		{
			cout<<"area of the rectangle="<<width*height<<endl;
		}
};
int main()
{
	rectangle r;
	r.getdata(10,20);
	r.disparea();
	return 0;
}
