#include<iostream>
#include<string>
using namespace std;
class Person{
	protected:
		string name;
		public:
			void setName(string n){ name=n;}
			
};
class Student : private Person
{
	public:
		void display()
		{cout<<name<<endl;}
		void StudentsetName(string n){ setName(n);}
};
class GStudent : public Student 
{
	public:
		void setGStudentName( string n){ StudentsetName(n);}
	
};
int main()
{
	GStudent rajia;
	rajia. setGStudentName("RAJIA REDDY");
	rajia.display();
	return 0;
}