#include<iostream>
using namespace std;
void bubblesort(int[],int);
int main()
{
	int a[20],n,i;
	cout<<" enter how many elements you want to enter:";
	cin>>n;
	cout<<"enter "<<n<<" elements \n";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<" before sorting numbers are\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	bubblesort(a,n);
	cout<<" after sorting numbers are\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}
void bubblesort(int a[],int n)
{
	int i,j,count=0;
	for(i=n-1;i>=1;i--)
	{
		count++;
		for(j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	cout<<"number of iterations in outer loop="<<count<<endl;
}
