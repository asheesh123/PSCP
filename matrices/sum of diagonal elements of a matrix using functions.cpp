#include<iostream>
using namespace std;
int sum(int[][5],int,int);
int main()
{
	int a[5][5],r,c,i,j,s;
	cin>>r>>c;
	if(r==c)
	{
		cout<<"enter "<<r*c<<"elements"<<endl;
		for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		cin>>a[i][j];
		s=sum(a,r,c);
		cout<<"sum of diagonal elements of matrix is="<<s;
	}
	else
	cout<<"enter the size of a square matrix";
	return 0;
} 
int sum(int a[][5],int r,int c)
{
	int s1=0,i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			s1=s1+a[i][j];
		}
	}
	return s1;
}
