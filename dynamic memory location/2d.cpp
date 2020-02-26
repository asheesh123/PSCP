#include<iostream>
using namespace std;
int main()
{
	int **p,r,c,i,j;
	cout<<"enter the size of a 2D array :";
	cin>>r>>c;
	p=new int*[r];
	for(i=0;i<r;i++)
	p[i]=new int[r];
	cout<<"enter elements of the array \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>*(*(p+i)+j);
		}
	}
	cout<<"elements of the array are \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<*(*(p+i)+j)<<" ";
		}
		cout<<endl;
	}
	for(i=0;i<r;i++)
	delete []p[i];
	delete []p;
	return 0;
}
