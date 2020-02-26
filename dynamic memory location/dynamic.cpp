#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"enter size of the array ";
	cin>>n;
	int *p=new int[n];
	cout<<"enter "<<n<<" values ";
	for(i=0;i<n;i++)
	{
		cin>>*(p+i);
	}
	cout<<"elements are \n";
	for(i=0;i<n;i++)
	{
		cout<<*(p+i)<<" ";
	}
	delete []p;
	return 0;
}
