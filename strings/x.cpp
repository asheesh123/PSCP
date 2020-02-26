#include<iostream>
using namespace std;
class employee
{
	public:
	int empcode;
	char empname[20];
	char empgender[10];
	float empage;
	float empbasicsalary;
	float empda;
	float emphra;
	float emptax;
	float empcrosssalary;
	public:
		void getdata(void);
		void crosssalary();
		void putdata(void);
		void showempdetails();
	};
	void employee::getdata()
	{
		empda=0.1*empbasicsalary;
		emphra=1.25*empbasicsalary;
	}
	void employee::crosssalary()
	{
		empcrosssalary=empbasicsalary*(1+emphra*0.1+empda*0.1);
		emptax=0.1*empcrosssalary;
	}
	void employee::showempdetails()
	{
		cout<<"\n details of:"<<empname;
		cout<<"\n employee code:"<<empcode;
		cout<<"\n employee age is:"<<empage;
		cout<<"\n employee basic salary is:"<<empbasicsalary;
		cout<<"\n employee DA is:"<<empda;
		cout<<"\n employee HRA is:"<<emphra;
		cout<<"\n employee cross salary is:"<<empcrosssalary;
		cout<<"\n employee TAX is:"<<emptax;
	}
	int main()
	{
		employee emp[10];
		int i,n;
		cout<<"\nenter the number of employee";
		cin>>n;
		for(i=0;i<n;i++)
		emp[i].getdata();
		for(i=0;i<n;i++)
		emp[i].crosssalary();
		for(i=0;i<n;i++)
	emp[i].showempdetails();
	return 0;
}
	
