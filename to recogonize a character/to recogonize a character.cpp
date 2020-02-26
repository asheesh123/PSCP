#include<iostream>
using namespace std;
int main()
{
	char ch;
	int f;
	cout<<"enter a character :";
	cin>>ch;
	f=int(ch);
	if(f>=48&&f<=57)
	cout<<"digit";
	else if(f>=65&&f<=90)
	cout<<"capital letter";
	else if(f>=97&&f<=122)
	cout<<"small letter";
	else
	cout<<"special symbol";
	return 0;
}
