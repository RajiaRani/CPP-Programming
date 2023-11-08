#include<iostream>
#include<string>
using namespace std;
class Person{
	protected:
		string name;
		public:
				void setName(string n){ name=n;}
};
class Student : protected Person
{ public:
	void display()
	{
		cout<<name<<endl;
	}
	void setStudentName(string n){setName(n);
	}
};
int main()
{
	Student rajia;
	rajia.setStudentName("RAJIA");
	rajia.display();
	return 0;
}