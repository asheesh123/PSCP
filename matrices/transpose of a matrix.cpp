#include<iostream>
using namespace std;
int main()
{
	int a[10][10],b[10][10],r,c,i,j;
	cout<<"enter size of a matrix ";
	cin>>r>>c;
	cout<<"enter "<<r*c<<" elements";
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	cin>>a[i][j];
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
	    b[j][i]=a[i][j];
	}	for(j=0;j<c;j++)
	for(i=0;i<c;i++)
	{
	    for(j=0;j<r;j++)
	    cout<<b[i][j]<<" ";
	    cout<<endl;
	}
	return 0;
}
