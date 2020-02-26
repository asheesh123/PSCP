#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str1[20],str2[20];
	cout<<"enter a string ";
	cin.getline(str1,20);
	cout<<"enter another string ";
	cin.getline(str2,20);
	int x=strcmp(str1,str2);
	if(x==0)
	{
		cout<<" equal";
	}
	if(x==1)
	cout<<" string 1 is greater ";
	else
	cout<<" string 1 is smaller ";
	

	return 0;
	
}
