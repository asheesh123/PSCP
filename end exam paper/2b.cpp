#include<iostream>
using namespace std;
int main()
{                     
	int i,j,n,l;
	char ch='A';
	cout<<"enter n value:";
	cin>>n;
	for(i=n;i>=1;i--)
	{
		l=(i-1)*(i-1);
		for(j=0;j<2*i-1;j++)
		{
			cout<<char(ch+l++)<<" ";
		}
		cout<<endl;
	}
}
