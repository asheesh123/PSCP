#include<iostream>
using namespace std;
int hcf(int,int);
int main()
{
	int m,n;
	cout<<"enter two positive integer:";
	cin>>m>>n;
	int a=hcf(m,n);
	cout<<"hcf of "<<m<<" and "<<n<<" is: "<<a;
	return 0;
}
int hcf(int m,int n)
{
	if(n!=0)
	return hcf(n,m%n);
	else
	return m;
}
