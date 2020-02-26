#include<iostream>
using namespace std;
void disp(int);
int main()
{
	int n;
	cout<<"enter a decimal number:";
	cin>>n;
	disp(n);
	return 0;
}
void disp(int n)
{
	if(n>=0&&n<8)
	cout<<n;
	else
	{
		disp(n/8);
		cout<<n%8;
	}
}
