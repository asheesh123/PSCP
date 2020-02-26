#include<iostream>
using namespace std;
struct student
{
	char name[20];
	int rollno;
	struct date
	{
		int d,m,y;
	};
	date dob,doj;
};
int main()
{
	student s;
	cout<<" enter name ";
	cin>>s.name;
	cout<<" enter rollno. ";
	cin>>s.rollno;
	cout<<" enter date of birth ";
	cin>>s.dob.d>>s.dob.m>>s.dob.y;
	cout<<" enter date of joining ";
	cin>>s.doj.d>>s.doj.m>>s.doj.y;
	cout<<"name:"<<s.name<<endl;
	cout<<"rollno:"<<s.rollno<<endl;
	cout<<"date of birth:"<<s.dob.d<<"/"<<s.dob.m<<"/"<<s.dob.y<<endl;
	cout<<"date of joining:"<<s.doj.d<<"/"<<s.doj.m<<"/"<<s.doj.y<<endl;
	return 0;
}
