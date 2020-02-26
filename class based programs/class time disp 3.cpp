#include<iostream>
using namespace std;
class time
{
	public:
	    int h,m;
		void gettime();
		void disptime();
		friend time addtime(time,time);
};
time addtime(time,time);
void time::gettime()
{
	cout<<" enter time:";
	cin>>h>>m;
}
void time::disptime()
{
	cout<<"time is  "<<h<<":"<<m<<endl;
}
time addtime(time t1,time t2)
{
	time t3;
	t3.h=t1.h+t2.h;
	t3.m=t1.m+t2.m;
	if(t3.m>=60)
	{
		int x=t3.m/60;
		t3.m=t3.m%60;
		t3.h=x+t3.h;
	}
	if(t3.h>=24)
	{
		t3.h=t3.h%24;
	}
	return t3;
}
int main()
{
	time t1,t2,t3;
	t1.gettime();
	t2.gettime();
	t3=addtime(t1,t2);
	t1.disptime();
	t2.disptime();
	t3.disptime();
	return 0;
}
