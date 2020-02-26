#include<iostream>
using namespace std;
class abc
{
	public:
		int item_price;
		char item_code[10];
};
int main()
{
	class abc item[10];
	int i,s=0;
	cout<<"enter price and code of 10 items\n";
	for(i=0;i<10;i++)
	{
		cin>>item[i].item_price>>item[i].item_code;
	}
	int max=item[0].item_price,c=0;
	for(i=0;i<10;i++)
	{
		if(item[i].item_price>=max)
		{
			max=item[i].item_price;
			c=i;
		}
		s=s+item[i].item_price;
	}
	cout<<"largest price item is "<<item[c].item_code<<" and its prise="<<max<<endl;
	cout<<"sum of all prices="<<s;
	return 0;
}
