#include<iostream>
using namespace std;
int c=0;
class abc
{
	public:
		abc()
		{
			c++;
			cout<<"object "<<c<<" created "<<endl;
		}
		~abc()
		{
			cout<<"object "<<c<<" deleted "<<endl;
			c--;
		}
};
int main()
{
	abc ob1,ob2;
	{
		abc ob3,ob4;
	}
	return 0;
}
