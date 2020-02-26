#include<iostream>
using namespace std;
void sort(int*,int);
int main()
{
	int a[10],n,i;
	cout<<"enter size of an array :";
	cin>>n;
	cout<<" enter "<<n<<" values ";
	for(i=0;i<n;i++)
		cin>>*(a+i);
	cout<<"before sorting numbers are \n";
	for(i=0;i<n;i++)
	    cout<<*(a+i)<<" ";
	    cout<<endl;
	sort(a,n);
	cout<<"after sorting numbers are \n";
	for(i=0;i<n;i++)
	    cout<<*(a+i)<<" ";  
	return 0;  
}
void sort(int *a,int n)
{
	int i,j;
	for(i=n-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(*(a+j)>*(a+j+1))
			{
				int t=*(a+j);
				*(a+j)=*(a+j+1);
				*(a+j+1)=t;
			}
		}
	}
}
