using namespace std;
#include<iostream>
#include<cstring>
void sort(char [][15],int);
int main() 
{
	char country[26][15];
	int i,n;
	cout<<"enter ,how many country you want to enter:";
	cin>>n;
	cout<<"enter "<<n<<" countries\n";
	for(i=0;i<n;i++)
	cin>>country[i];
	cout<<"country names before sorting are\n";
	for(i=0;i<n;i++)
	cout<<country[i]<<endl;
	sort(country,n);
	cout<<"country names after sorting are\n";
	for(i=0;i<n;i++)
	cout<<country[i]<<endl;
	return 0;
}
void sort(char country[][15],int n)
{
	char temp[15];
	for(int i=n-1;i>=0;i--)
	{
		for(int j=0;j<i;j++)
		{
			int x=(strcmp(country[j],country[j+1]));
			if(x>0)
			{
				strcpy(temp,country[j]);
				strcpy(country[j],country[j+1]);
				strcpy(country[j+1],temp);
			}
		}
	}
}
