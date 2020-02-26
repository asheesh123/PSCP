#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[20],l;int i,n;
	cout<<" enter string:";
	cin.getline(str,20);
	n=strlen(str);
	cout<<"character to delete";
	cin>>l;
	for(i=0;i<n;i++)
	{
		if(str[i]=='l')
		{
			str[i]==str[i+1];
			n--;
		}
	}
	for(i=0;i<n;i++)
	cout<<str[i];
	return 0;
}
