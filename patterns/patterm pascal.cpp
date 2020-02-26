#include<iostream>
using namespace std;
int main()
{
	int i,j,n,a=1,s;
	cout<<"enter the no. of rows";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(s=1;s<=n-i;s++)
		{
			cout<<" ";
		}
		for(j=0;j<=i;j++)
		{
		    if(i==0||j==0)
			a=1;
			else
			a=a*(i-j+1)/j;
			cout<<a<<" ";	
		}
		cout<<endl;
	}
   return 0;
}
