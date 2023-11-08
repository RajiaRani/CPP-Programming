#include<iostream>
#include<string>
using namespace std;
class Student{public:
	int age;
	void display()
	{cout<<"Fess pay by the student is "<<endl;
	}
};
class Student1:virtual public Student{
};
class Student2:virtual public Student{
};
class Totalstudent:public Student1, public Student2
{};
	int main()
	{Totalstudent raju;
	raju.display();
	return 0;
	}