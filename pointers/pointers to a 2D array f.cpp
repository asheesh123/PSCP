#include<iostream>
using namespace std;
int main()
{
	int a[3][2]={1,2,3,4,5,6};
	int i,j;
	int *p=(int*)a;
	for(i=0;i<3;i++)
	{
	    for(j=0;j<2;j++)
	    {
	    	cout<<*(p+2*i+j)<<endl;
		}
	}
	return 0;
}
