#include<iostream>
using namespace std;
void sort(int*,int);
int main()
{
	int n,i;
	cout<<" enter size of array ";
	cin>>n;
	int *p=new int[n];
	cout<<" enter "<<n<<" elements \n";
	for(i=0;i<n;i++)
	cin>>*(p+i);
	cout<<"before sorting numbers are \n";
	for(i=0;i<n;i++)
	cout<<*(p+i)<<" ";
	//sort(p,n);
	//cout<<endl;
	cout<<"after sorting numbers are \n";
	//for(i=0;i<n;i++)
	//cout<<*(p+i)<<" ";
	delete []p;
	return 0;
}
void sort(int *p,int n)
{
	int i,j;
	for(i=n-1;i>0;i++)
	{
		for(j=0;j<n;j++)
		{
			if(*(p+j)>*(p+j+1))
			{
				int t=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=t;
			}
		}
	}
	cout<<"asdf";
	for(i=0;i<n;i++)
	cout<<*(p+i)<<" ";
}
