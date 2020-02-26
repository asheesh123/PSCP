#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
	int m,n;
	cout<<"enter two numbers ";
	cin>>m>>n;
	cout<<"before swaping numbers are:"<<m<<" "<<n<<endl;
	swap(m,n);
	cout<<"after swaping numbers are:"<<m<<" "<<n<<endl;
	return 0;
}
void swap(int &m ,int &n)
{
	int t=m;
	m=n;
	n=t;
}
