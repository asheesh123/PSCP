#include<iostream>
using namespace std;
int min(int*,int);
int main()
{
	int n,i;
	cout<<" enter size of array ";
	cin>>n;
	int *p=new int[n];
	cout<<" enter "<<n<<" elements \n";
	for(i=0;i<n;i++)
	cin>>*(p+i);
	cout<<" minimum element is:"<<min(p,n);
	delete []p;
	return 0;
}
int min(int *p,int n)
{
	int i,m=*(p+0);
	for(i=1;i<n;i++)
	{
		if(m>*(p+i))
		m=*(p+i);
	}
	return m;
}
