#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[200];
	int i,c=0;
	cout<<"enter a string :";
	cin.getline(str,100);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' '||str[i]=='\t')
		{
			c++;
		}
	}
	cout<<"in given string number of words="<<c+1;
	return 0;
}
