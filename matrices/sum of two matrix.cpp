#include<iostream>
using namespace std;
int main()
{
	int r,c,a[5][5],b[5][5],d[5][5],i,j;
	cout<<"enter size of a matrix";
	cin>>r>>c;
	cout<<"enter "<<r*c<<" values of matrix A";
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	cin>>a[i][j];
	cout<<"enter "<<r*c<<"elements of matrix B";
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	cin>>b[i][j];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		d[i][j]=a[i][j]+b[i][j];
	}
	cout<<"A+B=";
	for(i=0;i<r;i++)
	{    
	    for(j=0;j<c;j++)
	    cout<<d[i][j]<<" ";
	    cout<<endl;
	}
	return 0;
}
