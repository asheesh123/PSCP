#include<iostream>
using namespace std;
int main()
{
	int a[10][10],r,c,i,j,s=0;
	cout<<"enter size of a matrix ";
	cin>>r>>c;
	if(r==c)
	{
	    cout<<"enter "<<r*c<<" elements";
	    for(i=0;i<r;i++)
	    for(j=0;j<c;j++)
	    cin>>a[i][j];
	    cout<<"A:"<<endl;
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
				if(i==j)
				s=s+a[i][j];
			}
		}
		cout<<"sum of diagonal elements of matrix A is"<<s;
	}
	else 
	cout<<"not possible";
	return 0;
}

