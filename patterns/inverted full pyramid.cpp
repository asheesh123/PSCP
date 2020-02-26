#include<iostream>
using namespace std;
int main()
{
	int i,j,n,s;
	cout<<"enter number of rows";
	cin>>n;
	for(i=n;i>=1;i--)
	{
		for(s=0;s<n-i;s++)
		cout<<" ";
		for(j=i;j<=2*i-1;j++)
		cout<<"*";
		for(j=0;j<i-1;j++)
		cout<<"*";
		cout<<endl;		
	}
	return 0;
}
