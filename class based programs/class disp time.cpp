#include<iostream>
using namespace std;
class time
{
	int h,m;
	public:
		void gettime();
		void disptime();
		time addtime(time);
};
void time::gettime()
{
	cout<<" enter time:";
	cin>>h>>m;
}
void time::disptime()
{
	cout<<"time is  "<<h<<":"<<m<<endl;
}
time time::addtime(time t2)
{
	time t3;
	t3.h=h+t2.h;
	t3.m=m+t2.m;
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
	t3=t1.addtime(t2);
	t1.disptime();
	t2.disptime();
	t3.disptime();
	return 0;
}
