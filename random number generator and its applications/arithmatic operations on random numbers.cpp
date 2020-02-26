using namespace std;
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
int main()
{
	int p,m,n,r;
	srand(time(0));
	while(1)
	{
	m=rand()%10;
	m+=1;
	n=rand()%10;
	n+=1;
	p=rand()%5;
	{
		if(p==0) cout<<"how much is "<<m<<" + "<<n<<endl;
		else if(p==1) cout<<"how much is "<<m<<" - "<<n<<endl;
		else if(p==2) cout<<"how much is "<<m<<" * "<<n<<endl;
		else if(p==3) cout<<"how much is "<<m<<" / "<<n<<endl;
		else if(p==4) cout<<"how much is "<<m<<" % "<<n<<endl;
    }
    cin>>r;
	while(r!=m-n&&p==1||r!=m+n&&p==0||r!=m*n&&p==2||r!=m/n&&p==3||r!=m%n&&p==4) 
	{
	  cout<<"no. please try again"<<endl;
	  cin>>r; 
   }
    if(p==0&&r==m+n)cout<<"very good!"<<endl;
	else if(p==1&&r==m-n)cout<<"very good!"<<endl;
    else if(p==2&&r==m*n)cout<<"very good!"<<endl;
    else if(p==3&&r==m/n)cout<<"very good!"<<endl;
	else if(p==4&&r==m%n)cout<<"very good!"<<endl;}
	return 0;
}
