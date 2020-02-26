#include<iostream>
using namespace std;
int main()
{
	int a[10][10],r,c,i,j,s1=0,s2=0;
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
				s1=s1+a[i][j];
			}
		}
		cout<<"sum of principle diagonal elements of matrix A is"<<s1<<endl;
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(i+j==r-1)
				s2=s2+a[i][j];
			}
		}
		cout<<"sum of other diagonal elements of matrix A is"<<s2<<endl;
		cout<<"difference of diagonal sum's="<<s1-s2;
	}
	else 
	cout<<"not possible";
	return 0;
}

