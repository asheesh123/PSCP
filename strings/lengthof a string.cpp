#include<iostream>
using namespace std;
#include<cstring>
int main()
{
	char str[20];
	cout<<"enter a string ";
	cin.getline(str,20);
	int l=strlen(str);
	cout<<"length ="<<l;
	return 0;
	
}
