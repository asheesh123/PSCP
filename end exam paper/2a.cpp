#include<iostream>
using namespace std;
int main()
{
	int x;
	x=206/(0.5*5+0.25*9+.10*4);
	cout<<"number of coins of 50 P="<<5*x<<" amounting "<<x*5*0.5<<" rupees"<<endl;
	cout<<"number of coins of 25 P="<<9*x<<" amounting "<<x*9*0.25<<" rupees"<<endl;
	cout<<"number of coins of 50 P="<<4*x<<" amounting "<<x*4*0.10<<" rupees"<<endl;
	return 0;
} 
