#include<iostream>
#include<string>
using namespace std;
class Person{protected:
	string name;
	void setName(string n){name=n;}
	};
class Student: private Person
{public:
	Person::name;
	void display()
	
{cout<<name<<endl;}
};
void StudentsetName(string n)
{StudentsetName(n);};
int main()
{
	Student rajia;
	rajia.name="CHENCHU REDDY";
	rajia.display();
	return 0;
}
	