#include<iostream>
using namespace std;
int main()
{
	int i,n,j,sum=0;
	cout<<"enter n value";
	cin>>n;
	for(i=1;i<=n;i++)
	{  
	    sum=0;
		for(j=1;j<=i/2;j++)
		{
			if(i%j==0)
	        sum=sum+j;
		}
		if(sum==i)
		cout<<i<<"  ";
	}
	return 0;
}
