#include<iostream>
#include<cstring>
using namespace std;
void disp(int);
int main()
{
	int n,m;
	cout<<"enter a number:";
	cin>>n;
	m=n;
	cout<<"octal value=";
	disp(n);
	cout<<endl;
	if(m<255)
		cout<<"equivalent ascii  character is "<<char(m);
	else  
		cout<<" ascii character does not exist";
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
