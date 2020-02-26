#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file,file1;
	file.open("asdf.txt",ios::out);
	file<<"Sumanth"<<endl<<"Asheesh"<<endl<<"Yaswanth"<<endl;
	file.close();
	file.open("hello.txt",ios::out);
	file<<"penta"<<endl<<"vishvkarma"<<endl<<"kumar"<<endl;
	file.close();
	file.open("asdf.txt",ios::out|ios::app);
	file1.open("hello.txt",ios::in);
	char ch;
	while(file1)
	{
		file1.get(ch);
		file.put(ch);
	}
	file.close();
	file1.close();
	return 0;
}
