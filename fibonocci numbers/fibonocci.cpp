#include<iostream>
using namespace std;
int main()
{
	int f0=1,f1=1,fn,i,n;
	cout<<"which fibonacii no.you want\n";
	cin>>n;
	for(i=2;i<n;i++)
	{
		fn=f0+f1;
		f0=f1;
		f1=fn;
	}
	if(n>2)
	cout<<"nth fibonocci number is   "<<fn<<endl;
	else
	cout<<f1;
	return 0;

}
