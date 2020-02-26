#include<iostream>
using namespace std;
int main()
{
	int j,i,n;
	cout<<"enter size ";
	cin>>n;
	int *p=new int[n];
	cout<<" enter"<<n<<" elements";
	for(i=0;i<n;i++)
	cin>>*(p+i);
	for(i=n-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(*(p+j)>0&&*(p+j+1)<0)
			{
				int t=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<*(p+i)<<" ";
	}
	delete[]p;
	return 0; 
}
