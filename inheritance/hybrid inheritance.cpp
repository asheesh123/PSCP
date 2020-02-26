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
class sport
{
	public:
		char str[20];
		void getsport()
		{
			cout<<" give your sport name ";
			cin.getline(str,20);
		}
};
class result:public test,public sport
{
	public:
		void dispresult()
		{
			cout<<"roll no. is:"<<rollno<<endl;
			cout<<"subject 1 marks ="<<s1<<endl;
			cout<<"subject 2 marks ="<<s2<<endl;
			cout<<"sport is:"<<str<<endl;
			if(s1>=35&&s2>=35)
			cout<<"Pass";
			else
			cout<<"Fail";
		}
};
int main()
{
	result r;	
	r.getsport();
	r.getrollno();
	r.getmarks();
	r.dispresult();
	return 0;
}
