#include<iostream>
using namespace std;
int main()
{
	int i,j,n,p=1,sum;
	cout<<" enter int";
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
		{
			cout<<i<<"  ";
			p=p*i;
		}
	}
	cout<<"prod="<<p;
	return 0;
}

