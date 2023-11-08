#include<iostream>
#include<string>
using namespace std;
class Person{
	public:
		string name;
		int age;
		void setName(string iname){name= iname;}
		void setAge(int a){age=a;}
		
};
class Student : public Person {  
public:
	int id;
	void setId(int iid){id= iid;}
	void introduce(){
		cout<<"Hi i am "<<name<<" and i am "<<age<<" years old "<<endl<<" and my student id is "<<id<<endl;
	}
};
int main()
{
	Student rajia;
	rajia.setName("CHENCHU");
	rajia.setAge(24);
	rajia.setId(3423);
	rajia.introduce();
	return 0;
}