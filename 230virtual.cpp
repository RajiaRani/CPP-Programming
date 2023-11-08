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
	public:
	Student1()
	{cout<<"This are the class 10th students "<<endl;
	}
};
class Student2:virtual public Student{
	public:
		Student2(){
			cout<<"this are the class 12th students "<<endl;
		}
};
class Totalstudent:public Student1, public Student2
{public:
	Totalstudent()
	{
		cout<<"total board class students are 230 "<<endl;
	}
	
};
	int main()
	{Totalstudent raju;
	raju.display();
	return 0;
	}