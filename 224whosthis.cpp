#include<iostream>
#include<string>
using namespace std;
class Student1{public:
	void show()
	{cout<<"Total students of class 10 is 210."<<endl;
	}
};
class Student2 : public Student1
	{public:
	void show()
	{cout<<"Total students of class 12 is 120."<<endl;}
};
void whosThis(Student1 s)
{s.show();}
int main()
{
	Student2 chu;
	chu.show();
	whosThis(chu);
	return 0;
}