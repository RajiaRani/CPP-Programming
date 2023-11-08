#include<iostream>
#include<string>
using namespace std;
class Student{ private:
	string name;
	int age;
	char sex;
	float marks;
	string result;
	public:
		Student(){
			name="CHENCHU REDDY";
			age=24;
			sex='m';
			marks=85.7;
			result="PASS";
			cout<<"the result of the student is"<<endl;
		}
		void display(){
			cout<<name<<endl<<age<<endl<<sex<<endl<<marks<<endl<<result<<endl;
		}
	
	
	
	};
	int main()
	{
		Student chenchu;
		chenchu.display();
		return 0;
	}
