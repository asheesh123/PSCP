#include<iostream>
using namespace std;
int main()
{
	int a[3][2]={1,2,3,4,5,6};
	int i,j;
	int *p[3];//it will store a group of pointers
	for(i=0;i<3;i++)
	{
		p[i]=a[i];
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		cout<<*(*(p+i)+j)<<" ";
		cout<<endl;
	}
	return 0;
}
