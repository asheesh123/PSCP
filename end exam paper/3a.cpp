#include<iostream>
using namespace std;
int main()
{
	int n,i,j=2;
	float t=1,s=1,x;
	cout<<" enter x and n values:";
	cin>>x>>n;
	float r=3.14*x/180;
	for(i=2;i<=n;i++,j=j+2)
	{
		t=t*r*r*(-1)/(j*(j-1));
		s=s+t;
	}
	cout<<"sum="<<s;
	return 0;
}
