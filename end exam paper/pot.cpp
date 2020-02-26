#include<iostream>
using namespace std;
int hexa(int n)
{
	char ch;
	if(n>=0&&n<10)
	return n;
	else if(n<16)
	return char(n+55);
	else
	{
		hexa(n/16);
		cout<<n%16;
	}
}
	int main()
	{
		int n,k;
		char ch;
		cout<<"enter the number";
		cin>>n;
		cout<<"heha"<<hexa(n);
		return 0;
	}

