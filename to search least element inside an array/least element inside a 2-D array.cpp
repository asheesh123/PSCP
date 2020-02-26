#include<iostream>
using namespace std;
int main()
{
    int a[10][10],r,c,i,j,least;
	cout<<"enter size of an 2D array";
	cin>>r>>c;
	cout<<"enter "<<r*c<<" elements";
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	cin>>a[i][j];
	least=a[0][0];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		cout<<a[i][j]<<" ";
		cout<<endl;
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]<least)
			least=a[i][j];
		}
	}
	cout<<"least array element is="<<least;
	return 0;
}
