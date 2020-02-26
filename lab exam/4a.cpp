#include<iostream>
#include<cstring>
void pal(char[],int,int);
using namespace std;
int main()
{
	char str[20];
	int i,j;
	cout<<"enter a string ";
	cin.getline(str,20);
	int l=strlen(str);
	i=0;j=l-1;
	pal(str,i,j);
	return 0;
}
void pal(char str[],int i,int j)
{
	if(str[i]!=str[j])
	{
		cout<<"not palindr";
	}
	else if(i>j)
	{
		cout<<"palin";
	}
	else
	{
		i++;
		j--;
		pal(str,i,j);
	}
}
