#include<iostream>
#include<string>
using namespace std;
class Human{protected:
	string name;
	int age;
	void putName(string n){ name=n;}
	void putAge(int a){ age=a;}
};
class Woman:public Human
{public:
Human::name;
Human::age;
void screen()
{cout<<"My name is "<<name<<endl;
cout<<"My age is "<<age<<endl;
}
void WomansetName(string n)	{WomansetName(n);}
void WomansetAge(int a){WomansetAge(a);}
};
int main()
{
	Woman rajia;
	rajia.name="Mr.Chenchu Reddy.";
	rajia.age= 24;
	rajia.screen();
	return 0;
	
}