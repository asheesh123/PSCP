#include<iostream>
using namespace std;
int main()
{
	int i,rev=0,n,m,r;
	cout<<"enter n value";//upto which number do you want?
	cin>>n;
	for(i=10;i<=n;i++)
	{
		rev=0;
		m=i;
		while(i>0)
		{
			r=i%10;
			rev=rev*10+r;
			i=i/10;
		}
		if(m==rev)
		cout<<rev<<"  ";
		i=m;
	}
	return 0;
}
