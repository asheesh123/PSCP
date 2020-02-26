#include<iostream>
using namespace std;
class shape
{
	public:
		int width,height;
		void getdata(int h,int w)
		{
			height=h;
			width=w;
		}
};
class paintcost 
{
     public:
	 	void cost(int area)
    	{
	    	cout<<"cost of the painting ="<<area*0.7;
	    }
};
class rectangle:public shape,public paintcost
{
	public:
		int  a;
		void area()
		{ 
		    a=width*height;
			cout<<"area of the rectangle="<<a<<endl;
		}
		void dispcost()
		{
			cost(a);
		}
};

int main()
{
	rectangle r1;
	r1.getdata(10,20);
	r1.area();
	r1.dispcost();
	return 0;
}
