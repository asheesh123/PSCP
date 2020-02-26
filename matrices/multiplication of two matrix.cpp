#include<iostream>
using namespace std;
int main()
{
	int a[5][5],b[5][5],c[5][5],t[5][5],i,j,m,n,p,q,sum=0,k;
	cout<<"enter the size of 1st matrix";
	cin>>m>>n;
	cout<<"enter the size of 2nd mtrix";
	cin>>p>>q;
	if(n==p)
	{
		cout<<"enter "<<m*n<<" elements of 1st matrix";
		for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		cin>>a[i][j];
		cout<<"A:"<<endl;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			cout<<a[i][j]<<" ";
			cout<<endl;
		}
		cout<<"enter "<<p*q<<" elements of 2nd matrix";
		for(i=0;i<p;i++)
		for(j=0;j<q;j++)
		cin>>b[i][j];
		cout<<"B:"<<endl;
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			cout<<b[i][j]<<" ";
			cout<<endl;
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				for(k=0;k<n;k++)
				sum=sum+a[i][k]*b[k][j];
				c[i][j]=sum;
				sum=0;
			}
		}
		cout<<" multiplication is C:"<<endl;
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			cout<<c[i][j]<<" ";
			cout<<endl;
		}	
	}
	else
	cout<<"multiplication is not possible";
	return 0;
}
