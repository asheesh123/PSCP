#include<iostream>
using namespace std;
int main()
{
	int l=0,m,n,i,a[500],p,c=0,k;
	a[0]=1;
	cout<<"enter a large number";
	cin>>m;
	for(n=2;n<=m;n++)
	{
		for(i=0;i<=l;i++)
		{
			p=a[i]*n+c;
			a[i]=p%10;
			c=p/10;
		}
		while(c!=0)
		{
			k=c%10;
			l++;
			a[l]=k;
			c=c/10;
		}
	}
	for(i=l;i>=0;i--)
	cout<<a[i];
	return 0;
}  
