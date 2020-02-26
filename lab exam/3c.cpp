#include<iostream>
using namespace std;
struct student
{
	public:
		char name[20];
		int rollno;
		struct marks
		{
			int sm;
		};
		marks s[4];
};
int main()
{
	student st[60];
	int i,s=0,j,n;
	cout<<"enter how many student's detail you want:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"roll no.,enter name and marks of the student("<<i+1<<")in four subjects\n";
		cin>>st[i].rollno>>st[i].name>>st[i].s[0].sm>>st[i].s[1].sm>>st[i].s[2].sm>>st[i].s[3].sm;
	}
	for(i=0;i<n;i++)
	{
		s=0;
		for(j=0;j<4;j++)
		{
			s=s+st[i].s[j].sm;
		}
		if(s/4>=30)
		cout<<st[i].name<<" pass"<<endl;
		else
		cout<<st[i].name<<" fail"<<endl;
	}
	for(i=0;i<4;i++)
	{
		s=0;
		for(j=0;j<n;j++)
		{
			s=s+st[j].s[i].sm;
		}
		cout<<"average marks of subject "<<i+1<<" = "<<s/n<<endl;
	}
	return 0;
}
