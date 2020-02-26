#include<iostream>
using namespace std;
int main()
{
	int a[]={5,10,20,40};
	cout<<&a<<endl;
	cout<<a<<endl;
	cout<<&a[0]<<endl;
	cout<<&a[1]<<endl;
	cout<<*(a)<<endl;
	cout<<*(a+1)<<endl;
	cout<<*(a+2)<<endl;
	return 0;
}
