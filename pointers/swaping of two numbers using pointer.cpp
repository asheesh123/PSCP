#include<iostream>
using namespace std;
void swap(int*,int*); 
int main()
{
	int a,b;
	cout<<"enter two numbers:";
	cin>>a>>b;
	cout<<" before swaping numbers are: "<<a<<" "<<b<<endl;
	swap(&a,&b);
	cout<<" after swaping numbers are: "<<a<<" "<<b<<endl;
	return 0;
}
void swap(int *p,int *q)
{
	int t=*p;
    *p=*q;
    *q=t;
}

