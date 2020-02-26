#include<iostream>
#include<cmath>
using namespace std;
int sum1(int[][5],int,int);
int sum2(int[][5],int,int);
int main()
{
	int a[5][5],r,c,i,j,s1,s2;
	cout<<"enter size of matrix";
	cin>>r>>c;
	if(r==c)
	{
		cout<<"enter "<<r*c<<"elements"<<endl;
		for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		cin>>a[i][j];
		cout<<"matrix is:"<<endl;
		for(i=0;i<r;i++)
		{
		   for(j=0;j<c;j++)
		   cout<<a[i][j]<<" ";
		   cout<<endl;
		}
		s1=sum1(a,r,c);
		s2=sum2(a,r,c);
		cout<<" sum of principle diagonal elements of matrix is="<<s1<<endl; 
		cout<<" sum of other diagonal elements of matrix is="<<s2<<endl;
		cout<<"  difference of sum's of diagonal elements of matrix is="<<(s1-s2);
	}
	else
	cout<<"enter the size of a square matrix";
	return 0;
} 
int sum1(int a[][5],int r,int c)
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
int sum2(int a[][5],int r,int c)
{
	int s2=0,i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i+j==r-1)
			s2=s2+a[i][j];
		}
	}
	return s2; 
}
