#include<iostream>
using namespace std;
void creatstr(char *);
int main()
{
	char *p,str[100];
	cout<<"enter a string:";
	cin.getline(str,100);
	p=str;
	creatstr(p);
	return 0;
}
void creatstr(char *p)
{
	char *q,vowel[20];
	q=vowel;
	while(*p!='\0')
	{
		if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U'||*p=='\t'||*p==' ')
		{
			*q=*p;
			q++;
		}
		p++;
	}
	*q='\0';
	//cout<<vowel; or
	q=vowel;
	cout<<q;
}
