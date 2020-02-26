#include<iostream>
using namespace std;
int main()
{
	int n1,r,i,a[5],b[5],m=0,n=0,s1=0,s2=0;
	cout<<" enter a positive integer:";
	cin>>n1;
	while(n1>0)
	{
		r=n1%10;
		a[m++]=r;
		n1=n1/10;
	}
	for(i=0;i<m;i++)
		s1=s1+a[i];	
	while(s1>0)
	{
		r=s1%10;
		b[n++]=r;
		s1=s1/10;
	}
	for(i=0;i<n;i++)
		s2=s2+b[i];
	for(i=0;i<m;i++)
	{
		if(s2==a[i])
		break;
	}
	if(i<m) 
	cout<<" lucky number is:"<<s2;
	else 
	cout<<" no lucky number";
	return 0;
}
