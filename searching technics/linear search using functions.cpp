#include<iostream>
using namespace std;
void ls(int[],int ,int);
int main()
{
	int a[10],n,e,i,f=0;
	cout<<"enter number of element of array";
	cin>>n;
	cout<<"enter "<<n<<"values";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter ,which value you wamt to search";
	cin>>e;
	ls(a,n,e);
	return 0;
}
void ls(int a[],int n,int e)
{
	int i,f=0;
	for(i=0;i<n;i++)
	{
		if(e==a[i])
		{f=1;
		break;
		}
	}
	if(f==1)cout<<"yes,number is there";
	else cout<<"no,number is not there";
}
