#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
	fstream file1,file2;
	char str[20],ch;
	file1.open("mydata.cpp",ios::out);
	cout<<"enter a string for mydata.cpp\n";
	cin>>str;
	file1<<str;
	file1.close();
	file2.open("myfile.cpp",ios::out);
	file1.open("mydata.cpp",ios::in);
	//cout<<"enter a string for mydata.cpp\n";
	//cin.getline(str,20);
	//file1<<str;
	while(file1)
	{
		file1.get(ch);
		file2.put(ch);
		cout<<ch;
	}
	file1.close();
	file2.close();
	return 0;
}

