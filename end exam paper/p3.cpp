#include<iostream>
using namespace std;
int main()
{
	int a[10],n,i,j,s=0;
	cout<<" enter array size:";
	cin>>n;
	cout<<" enter "<<n<<" elements";
	for(i=0;i<n;i++)
	cin>>a[i];
	for(j=0;j<n-1;j++)
	{
		s=s+((a[j+1]-a[j])*(a[j+1]-a[j]));
	}	
	cout<<" required sum="<<s<<endl;
	return 0;
}
