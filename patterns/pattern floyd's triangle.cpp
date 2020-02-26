#include<iostream>
using namespace std;
int main()
{
	int a=1,i,j,n;
	cout<<"enter n value";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<a<<" ";
			a++;
		}
		cout<<endl;
	}
	return 0;
}
