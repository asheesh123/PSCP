#include<iostream>
using namespace std;
#define nsec 3
#define ns 4
#define nq 2
void getdata(int grade[][ns][nq]);
void saa(int[][ns][nq],int[][ns]);
void disp(int[nsec][ns][nq],int sa[][ns]);
int main()
{
	int grade[nsec][ns][nq],sa[nsec][ns]={0};
	cout<<endl;
	getdata(grade);
	cout<<endl;
	saa(grade,sa);
	cout<<endl;
	disp(grade,sa);
	return 0;
}
void getdata(int grade[nsec][ns][nq])
{
	int i,j,k;
	cout<<"enter "<<nsec*ns*nq<<" marks out of  100 for the students\n";
	for(i=0;i<nsec;i++)
	{
		for(j=0;j<ns;j++)
		{
			for(k=0;k<nq;k++)
			cin>>grade[i][j][k];
		}
	}
	for(i=0;i<nsec;i++)
	{
		for(j=0;j<ns;j++)
		{
			for(k=0;k<nq;k++)
			cout<<grade[i][j][k]<<" ";
		}
	}
}
void saa(int grade[nsec][ns][nq],int sa[][ns])
{
	int i,j,s,k;
	for(i=0;i<nsec;i++)
	{
		for(j=0;j<ns;j++)
		{
			s=0;
			for(k=0;k<nq;k++)
			{
				s=s+grade[i][j][k];
			}
			sa[i][j]=s/nq;
        }
	}
	for(i=0;i<nsec;i++)
        for(j=0;j<ns;j++)
	cout<<sa[i][j]<<"   ";
	cout<<endl;

}
void disp(int grade[nsec][ns][nq],int sa[][ns])
{
	int i,j,k,s,l=0;
	cout<<"_______________________________________________________"<<endl;
	cout<<"|section |  St.No | Student average |grade |  Quizes  |"<<endl;
	cout<<"_______________________________________________________"<<endl;
	for(i=0;i<nsec;i++)
	{
		for(j=0;j<ns;j++)
		{
		    cout<<"|  "<<char(i+69)<<"     |    ";
		    cout<<j+1<<"   |         " <<sa[i][j]<<"       |";
		     l=sa[i][j];
			    if(l>90) cout<<" A";
			    else if(l>80) cout<<" B";
			    else if(l>70) cout<<" C";
			    else if(l>60) cout<<" D";
			    else if(l>40) cout<<" P";
			    else  cout<<" F";
			    cout<<"  |  ";
			    s=0;l=0;
			for(k=0;k<nq;k++)
			 cout<<grade[i][j][k]<<"  | ";
			cout<<endl;
		}
		cout<<"_____________________________________________________"<<endl;
	}
}
