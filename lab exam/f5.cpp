#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream ofl;
	char ch;
	ofl.open("rev.cpp");
	char str[100];
	cout<<"enter elements";
	cin.getline(str,100);
	ofl<<str;
	ofl.close();
	ifstream inf;
	inf.open("rev.cpp");
	cout<<"contents in reverse order\n";
	inf.seekg(0,ios::end);
	int l=inf.tellg();
	for(int i=1;i<=l;i++)
	{
		inf.seekg(-i,ios::end);
		inf>>ch;
		cout<<ch;
	}
	inf.close();
	return 0;
}
