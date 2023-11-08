#include<iostream>
#include<string>
using namespace std;
class Report{
	private:
		string name;
		int age;
		char sex;
		string address;
		string mobilenumber;
		public:
			Report()
			{
				cout<<"default constructor"<<endl;
			}
			 Report( string iname, int a,char s, string add , string m_no)
			{
				name= iname;
				age= a;
				sex= s;
				address=add;
				string = m_no;
			}
			void screen(string iname, int a,char s, string add , string m_no)
			{
				cout<<" Report of the patient"<<endl;
				cout<<" Name = "<<name<<endl;
				cout<<"Age= "<<age<<endl;
				cout<<"Sex= "<<sex<<endl;
				cout<<"Address= "<<address<<endl;
				cout<<"Mobile number= "<<mobilenumber<<endl;
				
			}
};
int main()
{
	Report patient();
	patient.screen();
	return 0;
}