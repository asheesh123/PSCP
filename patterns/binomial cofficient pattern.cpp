#include<iostream>
using namespace std;
int main()
{
	int n,r,m,prev,current;
	cout<<"enter number of rows ";
	cin>>m;
	for(n=0;n<=m-1;n++)
	{
		prev=current=1;
		cout<<current;
		for(r=0;r<=n-1;r++)
		{
			current=((n-r)*prev)/(r+1);
			cout<<" "<<current;
			prev=current;
		}
		cout<<endl;
	}
	return 0;
}
