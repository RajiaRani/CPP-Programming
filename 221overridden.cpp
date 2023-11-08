#include<iostream>
#include<string>
using namespace std;
class Person{public:
	void introduce()
	{cout<<"Hi my name is "<<endl;}
};
class Student:public Person
{public:
	void introduce()
	{
		cout<<"Hello everyone my name is Rajia and i am 26 years old. I have 3 years of teaching experience."<<endl;
		}
		};
		int main()
		{Student chu;
		chu.introduce();
		return 0;		}