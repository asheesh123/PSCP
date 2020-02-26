#include<iostream>
using namespace std;
#define ns 4
#define nq 3
int main()
{
	int grade[ns][nq],i,j,a[10]={0},b[10]={0},s1,k;
	cout<<"enter "<<ns*nq<<" grades\n";
	for(i=0;i<ns;i++)
	{
		for(j=0;j<nq;j++)
		cin>>grade[i][j];
	}
	int s=0;
	for(i=0;i<ns;i++)
	{
		s=0,s1=0;
		for(j=0;j<ns;j++)
		{if(j<nq)
			s=s+grade[i][j];
			s1=s1+grade[j][i];	
		}
		a[i]=float(s)/nq;
		if(i<nq)
		b[i]=float(s1)/ns;
	}
	cout<<"_______________________________________"<<endl;
	cout<<"| S.No  | Student average |     Quizs |"<<endl;
	cout<<"_______________________________________"<<endl;
	for(i=0;i<ns;i++)
	{
		cout<<"| "<<i+1<<"     |           ";
		cout<<a[i]<<"     |    ";
		for(j=0;j<nq;j++)
		{
			cout<<grade[i][j]<<"| ";
		}
		cout<<endl;
	}
	cout<<"_______________________________________"<<endl;
	cout<<"quizaverage="<<"                   ";
    for(i=0;i<nq;i++)
	cout<<b[i]<<"| ";
	cout<<endl;
	cout<<"_______________________________________";
	
	return 0;
}














