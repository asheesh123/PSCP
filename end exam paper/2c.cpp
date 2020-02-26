#include<iostream>
using namespace std;
void text_stat(char*,int&,int&,int&);
int main()
{
	int lc=0,wc=0,cc=0;
	char str[100],*p;
	cout<<"enter a string:";
	cin.read(str,20);
	p=str;
	text_stat(p,lc,wc,cc);
	cout<<"chatacters="<<cc<<endl;
	cout<<"words="<<wc+1<<endl;
	cout<<"lines="<<lc<<endl;
	return 0;
}
void text_stat(char *p,int &lc,int &wc,int &cc)
{
	while(*p!='\0')
	{
		if(*p!=' '||*p!='\t')
		{
			cc++;
		}
		if(*p==' '||*p=='\t'||*p=='\n'||*p=='\0')
		{
			wc++;
		}
		if(*p=='\n')
		{
			lc++;
		}
		p++;
	}
}
