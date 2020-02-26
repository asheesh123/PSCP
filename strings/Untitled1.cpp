#include<iostream>
using namespace std;
void hex(int n)
{
	int r;
	if(n<=9&&n>=0)
	{
		cout<<n;
	}
	else
	r=n%16;
	switch(n)
	{
		case 10:<<"A";break;			
		case 11:<<"B";break;
		case 12:<<"C";break;
		case 13:<<"D";break;
		case 14:<<"E";break;
		case 15:<<"F";break;
		default cout<<;break;
		{
			return hex(n/16)
		}
		
	}
	}
int main()
{
	int n;
	char ch;
	cout<<"enter number";
	cin>>n;
	if(n<0);
	cout<<"noy posible";
	else
	cout<<"hexa is";
hexa(n);	
return 0;

}
