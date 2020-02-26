#include<iostream>
using namespace std;
#define ns 4
#define nq 3
void getdata(int[][nq]);
void saa(int[][nq],int[]);
void qaa(int[][nq],int[]);
void disp(int[][nq],int sa[ns],int qa[nq]);
int main()
{
	int grade[ns][nq],sa[ns],qa[nq];
	getdata(grade);
	cout<<endl;
	saa(grade,sa);
	cout<<endl;
	qaa(grade,qa);
	cout<<endl;
	disp(grade,sa,qa);
	return 0;	
}
void getdata(int grade[][nq])
{
	int i,j;
	cout<<"enter "<<ns*nq<<" marks\n";
	for(i=0;i<ns;i++)
	{
		for(j=0;j<nq;j++)
		cin>>grade[i][j];
	}
	for(i=0;i<ns;i++)
	{
		for(j=0;j<nq;j++)
		cout<<grade[i][j]<<" ";
	}
}
void saa(int grade[][nq],int sa[ns])
{ 
	int i,j,s;
	for(i=0;i<ns;i++)
	{
		s=0;
		for(j=0;j<nq;j++)
		{
			s=s+grade[i][j];	
		}
		sa[i]=s/nq;
	}
	for(i=0;i<ns;i++)
	cout<<sa[i]<<" ";
}
void qaa(int grade[][nq],int qa[nq])
{
	int i,j,s;
	for(i=0;i<nq;i++)
	{
		s=0;
		for(j=0;j<ns;j++)
		{
				s=s+grade[j][i];
		}
	    qa[i]=s/ns;
    }
	for(i=0;i<nq;i++)
	cout<<qa[i]<<" ";	
}
void disp(int grade[][nq],int sa[ns],int qa[nq])
{
	int i,j;
	cout<<"_______________________________________"<<endl;
	cout<<"| St.No  | Student average |     Quizs |"<<endl;
	cout<<"_______________________________________"<<endl;
	for(i=0;i<ns;i++)
	{
		cout<<"| "<<i+1<<"     |           ";
		cout<<sa[i]<<"     |    ";
		for(j=0;j<nq;j++)
		{
			cout<<grade[i][j]<<"| ";
		}
		cout<<endl;
	}
	cout<<"_______________________________________"<<endl;
	cout<<"quiz average="<<"                   ";
    for(i=0;i<nq;i++)
	cout<<qa[i]<<"| ";
	cout<<endl;
	cout<<"_______________________________________";
}
