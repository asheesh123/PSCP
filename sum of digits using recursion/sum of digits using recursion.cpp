#include<iostream>
using namespace std;
int sumdigit(int,int);
int main()
{
	int n,s=0,t;
	cout<<"enter a number:";
	cin>>n;
	t=sumdigit(n,s);
	cout<<"sum of digits of given number="<<t;
	return 0;
}
int sumdigit(int n,int s)
{
	int r;
	if(n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
		sumdigit(n,s);
	}
	else
	return s;
}
