#include<iostream>
#include<string>
using namespace std;
class Student1{public:
	string name;
	void aboutStudent1(){cout<<" Name of the student is "<<endl;}
};
class Student2{public:
	int marks;
	void aboutStudent2(){cout<<" Marks of the student is "<<endl;}
};
class Child: public Student1, public Student2
{public:
void aboutResult()
{ cout<<"result of the student "<<endl;}


void setnameandmarks(string n, int m)
{name=n;
marks=m;
}



void display(){
	cout<<"Name is "<< name <<endl;
	cout<<"marks is "<<marks<<endl;
}
};
int main()
{
	Child rajia;
	rajia.setnameandmarks("Chenchu", 342);
	rajia.display();
	
	return 0;
}