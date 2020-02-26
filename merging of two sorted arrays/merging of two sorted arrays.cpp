#include<iostream>
using namespace std;
int main()
{
	int a[10],b[10],c[20],i,j,k,m,n;
	cout<<"enter size of 1st array";
	cin>>m;
	cout<<"enter "<<m<<" elements in sorted order";
	for(i=0;i<m;i++)
	cin>>a[i];
/*	cout<<"1st array elements are";
	for(i=0;i<m;i++)
	cout<<a[i]<<" ";
	cout<<endl;*/
	cout<<"enter size of 2nd array";
	cin>>n;
	cout<<"enter "<<n<<" elements in sorted order";
	for(j=0;j<n;j++)
	cin>>b[j];
	/*cout<<"2nd array elements are";
	for(j=0;j<n;j++)
	cout<<b[j]<<" ";
	cout<<endl;*/
	i=0;j=0;k=0;
	while(i<m&&j<n)
	{
		if(a[i]<=b[j])
		c[k++]=a[i++];
		else
		c[k++]=b[j++];
	}
	while(i<m)
		c[k++]=a[i++];
	while(j<n)
		c[k++]=b[j++];
	cout<<"merged sorted numbers are";
	for(k=0;k<m+n;k++)
	cout<<c[k]<<" ";
	cout<<endl;
	return 0;	
}
