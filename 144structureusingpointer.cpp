#include<iostream>
using namespace std;
struct rajia{int age; char gender;bool counting;
};
int main()
{
	rajia student;
	rajia *studentptr;
	studentptr=&student;
	student. age=20;
	studentptr->gender='m';
	student .counting=49;
	cout<<studentptr->age<<endl;
	cout<<student.gender<<endl;
	cout<<studentptr->counting<<endl;
	return 0;
}