#include<iostream>
using namespace std;
class student
{
	protected:
		int rollnumber;
		public:
			void getnumber(int);
			void putnumber(int);
	};
	void student::getnumber(int a)
	{
		cout<<"enter roll number";
		cin>>rollnumber;
	}
	void student::putnumber(int)
	{
		cout<<"roll number:"<<rollnumber<<endl;
	}
	class test:public student
	{
		protected:
			float sub1;
			float sub2;
			public:
			void getmarks(float,float);
			void putmarks(void);
		};
		void test::getmarks(float,float)
		{
			cout<<"enter marks";
			cin>>sub1>>sub2;
		}
		void test::putmarks()
		{
			cout<<"marks in sub1="<<sub1<<endl;
			cout<<"marks in sub="<<sub2<<endl;
		}
		class result:public test
		{
			float total;
			public:
				void display(void);
			};
			void result::display(void)
			{
				total=sub1+sub2;
				putnumber(float);
				putmarks();
				cout<<"total="<<total<<endl;
			}
			int main()
			{
				result student1;
				student1.getnumber();
				student1.getmarks();
				student1.display();
				return 0;
			}
		
