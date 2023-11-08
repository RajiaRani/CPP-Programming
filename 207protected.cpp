#include<iostream>
#include<string>
using namespace std;
class Data{
	protected:
		int std;
		int rollno;
		string result;
		void Display()
		{
			cout<<" Result of the students "<<endl;
		}
		public:
			void setStd(int s){ std=s;}
			void setRollno(int r){ rollno=r;}
			void setResult(string g){ result=g;}
			};
class Student : public Data
{
	public:
		void screen()
		{
			cout<<std<<endl;
			cout<<rollno<<endl;
			cout<<result<<endl;
		}
		
};
int main()
{
	Student rajia;
	rajia.setStd(10);
	
	rajia.setRollno(231564);
	
	rajia.setResult("Pass");
	rajia.screen();
	return 0;
}