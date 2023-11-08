#include<iostream>
using namespace std;

struct student{ int rollno; char sex; int age;
};

void display(student s);
void screen(student *s);
int main()
{
	student chenchu={2324, 'm',24};
	display(chenchu);
	screen(&chenchu);
	return 0;
}

void display(student s)
{cout<<s.rollno<<endl;
cout<<s.sex<<endl;
cout<<s.age<<endl;
}
void screen(student *s)
{
	cout<<s-> rollno<<endl;
cout<<s->sex<<endl;
cout<<s->age<<endl;
}


