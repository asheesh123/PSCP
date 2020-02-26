#include<iostream>
using namespace std;
class student
{
	public:
		int rollno;
		void getrollno()
		{
			cout<<"enter roll no. of the student ";
			cin>>rollno;
		}
};
class test:public student
{
	public:
		int s1,s2;
		void getmarks()
		{
			cout<<"enter marks in two subject ";
			cin>>s1>>s2;
		}
};
class result:public test
{
	public:
		void dispresult()
		{
			cout<<"roll no. is:"<<rollno<<endl;
			cout<<"subject 1 mark ="<<s1<<endl;
			cout<<"subject 2 mark ="<<s2<<endl;
			if(s1>=35&&s2>=35)
			cout<<"You are Pass";
			else
			cout<<"You are Fail";
		}
};
int main()
{
	result r;
	r.getrollno();
	r.getmarks();
	r.dispresult();
	return 0;
}
