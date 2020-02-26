#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char country[10][15];
	int i,n;
	cout<<"enter number of strings you want to enter :";
	cin>>n;
	cout<<"enter "<<n<<" strings\n";
	for(i=0;i<n;i++)
    {
    	cin>>country[i];
	}
	cout<<"country names are:\n";
	for(i=0;i<n;i++)
	cout<<country[i]<<endl;
	return 0;	
}
