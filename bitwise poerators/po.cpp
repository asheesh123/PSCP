#include<iostream>
using namespace std;
int main()
{
	unsigned int x,y,c;
	cout<<"enter";
	cin>>x>>y;
	c=y;
	while(y!=0)
	{
		c=x&y;
		x=x^y;
		y=c<<1;
		
	 } 
	 cout<<endl<<x;
	 return 0;
}
