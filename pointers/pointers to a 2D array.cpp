#include<iostream>
using namespace std;
int main()
{
	int a[3][2]={1,2,3,4,5,6},i,j;
	for(i=0;i<3;i++)
	{
		cout<<a+i<<" ";
	}
	cout<<endl;
	for(i=0;i<3;i++)
	{
		cout<<*(a+i)<<" ";
	}
	cout<<"\n\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		cout<<*(*(a+i)+j)<<" ";
		cout<<endl;
	}
	cout<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		cout<<(*(a+i)+j)<<" ";
		cout<<endl;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		cout<<((a+i)+j)<<" ";
		cout<<endl;
	}
	return 0;
}
