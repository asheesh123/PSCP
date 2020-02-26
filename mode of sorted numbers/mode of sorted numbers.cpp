#include<iostream>
using namespace std;
int main()
{
	int p,c,m,cf,mf;
	cout<<"enter first number";
	cin>>c;
	p=c;
	m=c;
	cf=1;
	mf=1;
	cout<<"enter next number";
	cin>>c;
	while(c!=0)
	{
		
		if(c<p)
		{
			cout<<"this is not a valid number\n";
			cout<<"enter next number";
			cin>>c;
		    continue;
		}
		if(p==c)
		{
			cf++;
		}
		else if(cf>mf)
		{
			mf=cf;
			cf=1;
			m=p;
			p=c;
		}
		else
		{
			cf=1;
			p=c;
		}
		cout<<"enter next number";
		cin>>c;
	}
	if(cf>mf)
	{
		m=p;
		mf=cf;
	}
	cout<<"mode="<<m<<" and its mode frequendcy="<<mf;
	return 0;
}
