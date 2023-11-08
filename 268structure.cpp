#include<iostream>
using namespace std;
struct Person{ char name[300];
int age;
string occuption ;
double salary;
};
int main()
{
	Person p;
	cout<<" Person details "<<endl<<"Enter the Person name "<<endl;
	cin.getline(p.name, 300);
	cout<<" Enter the Person age "<<endl;
	cin>>p.age;
	cout<<" Enter the Person occuption "<<endl;
	cin>>p.occuption;
	cout<<" Enter the Person salary "<<endl;
	cin>>p.salary;
	
	cout<<"FINAL DETAILS OF THE PERSONS ARE FOLLOWS "<<endl;
	cout<<"Name= "<<p.name<<endl;
		cout<<"Age= "<<p.age<<endl;
			cout<<"Occuption= "<<p.occuption<<endl;
				cout<<"Salary= "<<p.salary<<endl;
				return 0;
	
}
