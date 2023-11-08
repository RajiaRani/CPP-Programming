#include<iostream>
#include<string>
using namespace std;
struct address{ int houseno;
string areaname;
};
struct student { string name; int rollno; char sex; int age;address addr;
};
int main()
{
	student rajia;
	student *rajiaptr;
	rajiaptr=&rajia;
	
	rajiaptr->name="RAJIA SYAL";
	rajiaptr->rollno=1234;
	rajiaptr->age=26;
	rajiaptr->addr.houseno=91;
	rajiaptr->addr.areaname="janak nagar basti sheikh, jalandhar";
	cout<<rajiaptr->name<<endl;
	cout<<rajiaptr->rollno<<endl;
	cout<<rajiaptr->age<<endl;
	cout<<rajiaptr->addr.houseno<<endl;
	cout<<rajiaptr->addr.areaname<<endl;
	return 0;
	
}