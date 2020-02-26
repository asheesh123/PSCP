#include<iostream>
void bs(int[],int,int,int);
using namespace std;
int main()
{
	int a[20],n,i,j,e,l,h;
	cout<<"enter the size of an array ";
	cin>>n;
	cout<<"enter"<<n<<"values";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter a element to be search";
	cin>>e;
	i=0;h=n-1;
	bs(a,l,h,e);
	return 0;
}
void bs(int a[],int l,int h,int e)
{
	
	if(l>h)
	{
		cout<<"element is notfound";
		return;
	}
    int	m=(l+h)/2;
	if(e==a[m])
	{
    	cout<<"element is found";
    	cout<<"position="<<m;
    	return;
	}
	else if(e<a[m])
	{
		h=m-1;
        bs(a,l,h,e);
	}
	else
	{
		l=m+1;
		bs(a,l,h,e);
	}
}		
