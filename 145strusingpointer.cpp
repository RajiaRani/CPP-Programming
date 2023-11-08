#include<iostream>
using namespace std;
struct total{int studing; char gender;
int marks;
bool result;
} ;
int main()
{
	total rajia;
	total*rajiaptr;
	rajiaptr=&rajia;
	rajia.studing=10+2;
	rajiaptr->gender='f';
	rajia.marks=89;
	rajiaptr->result= true;
	cout<<rajia.studing<<endl;
	cout<<rajiaptr->gender<<endl;
	cout<<rajia.marks<<endl;
	cout<<rajiaptr->result<<endl;
	return 0;
}