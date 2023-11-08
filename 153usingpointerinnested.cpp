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

	rajia .name="RAJIA SYAL";
	rajia.age=26;
	rajia.sex='f';
	rajia.result=true;
	rajia.rollno=3456;
	rajia.nature="she is very good in all the activities";
	address adr ={91,"janak nagar basti sheick jalandhar"};
	rajia . addr = &adr;
	cout<<rajia.name<<endl;
	cout<<rajia.age<<endl;
	cout<<rajia.sex<<endl;
	cout<<rajia.result<<endl;
	cout<<rajia.rollno<<endl;
	cout<<rajia.nature<<endl;
	cout<<rajia.addr-> houseno<<endl;
		cout<<rajia.addr-> areano<<endl;
		return 0;
}