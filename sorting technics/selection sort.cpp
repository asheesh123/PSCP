#include<iostream>
using namespace std;
void ss(int [],int);
int main()
{
	int a[20],n,i,j;
	cout<<"enter the size of an array ";
	cin>>n;
	cout<<"enter"<<n<<"values";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"before sorting numbers are\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	ss(a,n);
	cout<<"after sorting numbers are\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}
void ss(int a[],int n)
{
	int i,j,p;
	for(i=0;i<n-1;i++)
	{
		p=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[p])
			p=j;
		}
		if(p!=i)
		{
			int t=a[i];
			a[i]=a[p];
			a[p]=t;
		}
	}
}	
