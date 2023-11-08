#include<iostream>
#include<string>
using namespace std;
struct address{ int houseno;
string areano;
};
struct student{ string name; int age;char sex; bool result; int rollno; string nature; address *addr; };
int main(){
	student rajia;
	student *rajiaptr;
	rajiaptr=&rajia;
	rajiaptr->name="RAJIA SYAL";
	rajiaptr->age=26;
	rajiaptr->sex='f';
	rajiaptr->result=true;
	rajiaptr->rollno=3456;
	rajiaptr->nature="she is very good in all the activities";
	address adr ={91,"janak nagar basti sheick jalandhar"};
	rajiaptr -> addr = & adr;
	cout<<rajiaptr->name<<endl;
	cout<<rajiaptr->age<<endl;
	cout<<rajiaptr->sex<<endl;
	cout<<rajiaptr->result<<endl;
	cout<<rajiaptr->rollno<<endl;
	cout<<rajiaptr->nature<<endl;
	cout<<rajiaptr->addr-> houseno<<endl;
		cout<<rajiaptr->addr-> areano<<endl;
		return 0;
}