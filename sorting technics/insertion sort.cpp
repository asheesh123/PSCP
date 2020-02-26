#include<iostream>
using namespace std;
void is(int [],int);
int main()
{
	int a[20],n,i,j;
	cout<<"enter the size of an array ";
	cin>>n;
	cout<<"enter"<<n<<"values";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<endl;
	cout<<"before sorting numbers are\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	is(a,n);
	cout<<"after sorting numbers are\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}
void is(int a[],int n)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		j=i;
		while(a[j]<a[j-1]&&j>0)
		{
			int t=a[j];
			a[j]=a[j-1];
			a[j-1]=t;
			j--;
		}
	}}
