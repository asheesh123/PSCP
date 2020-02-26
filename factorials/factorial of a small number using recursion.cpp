#include<iostream>//for small numbers
using namespace std;
int fact(int);
int main()
{
	int n,f;
	cout<<"enter a number for factorial";
	cin>>n;
	f=fact(n);
	cout<<"factorial="<<f;
	return 0;
}
int fact(int n)
{
	if(n==0)
	return 1;
	else 
	return n*fact(n-1);
}
