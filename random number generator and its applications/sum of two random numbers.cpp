#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>
int main()
{
	int i,m,n,r;
	srand(time(0));
	m=rand()%100;
	m+=1;
	n=rand()%100;
	n+=1;
	cout<<"how much  is "<<m<<" plus "<<n<<endl;
	cin>>r;
	while(r!=m+n)
	{
		cout<<"no.please try again"<<endl;
		cin>>r;
	}
	cout<<"correct";
	return 0;
	
} 
