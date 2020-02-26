#include<iostream>
using namespace std;
class student
{
	private:
		char name[20];
		int rollno;
	public:
		void getdata()
		{
			cout<<"enter name of student ";
			cin>>name;
			cout<<"enter roll no. of student ";
			cin>>rollno;
		}
		void disp()
		{
			cout<<" name :"<<name<<"    "<<" roll no. :"<<rollno<<endl;
		}
};
int main()
{
	student s1,s2;
	s1.getdata();
	s2.getdata();
	s1.disp();
	s2.disp();
}
