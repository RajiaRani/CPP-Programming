#include<iostream>
using namespace std;
struct employee{
	char name[50];
	int age;
	string education;
	double salary;
	
};
int main()
{
		employee e;
	cout<<" Enter the details of each employee "<<endl;
	cout<<"Name ->";
	cin.getline(e.name,50);
	cout<<"age ->";
	cin>>e.age;
	cout<<"Highest Qualification ->";
	cin>>e.education;
	cout<<"Salary ->";
	cin>>e.salary;
	cout<<endl;
	
	cout<<"Employee details are follow "<<endl;
	cout<<endl;
	cout<<"Name ="<<e.name<<endl;
	cout<<"Age ="<<e.age<<endl;
	cout<<"Highest Qualification ="<<e.education<<endl;
	cout<<"Salary ="<<e.salary<<endl;
	return 0;

	
}