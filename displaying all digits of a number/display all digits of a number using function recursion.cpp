#include<iostream>
using namespace std;
void disp(int);
int main()
{
	int n;
	cout<<"enter a positive integer";
	cin>>n;
	cout<<"digits are:";
	disp(n);
	return 0;
}
void disp(int n)
{
	int d;
	if(n<=9)
	cout<<n;
	else
	{
	   d=n%10;
	   cout<<d<<", ";
	   disp(n/10);	
	}
}
