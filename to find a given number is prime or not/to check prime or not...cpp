#include<iostream>
using namespace std;
int main()
{
	int n,m,i;
	cout<<"enter a number";
	cin>>n;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		break;
	}
	if(i==n)
	cout<<"prime";
	else
	cout<<"not a prime";
	return 0;
}
