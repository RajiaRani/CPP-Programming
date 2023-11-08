#include<iostream>
#include<string>
using namespace std;
struct Student{string name;
int std;
int rollno;
char section;
};
int main()
{
	Student s[5];
	cout<<"enter the student name, std, rollno and section "<<endl;
	for(int a=0;a<5;a++)
	{
		cout<<"enter the details of the students "<<endl;
		cin>>s[a].name;
		cin>>s[a].std;
		cin>>s[a].rollno;
		cin>>s[a].section;
		
	}
	cout<<"details of the students"<<endl;
	for(int a=0;a<5;a++ )
	{
		cout<<"Final details of the each student is "<<(a+1)<<endl;
		cout<<" Name= " <<s[a].name<<endl;
		cout<<" Class= " <<s[a].std<<endl;
		cout<<" Roll Number= " <<s[a].rollno<<endl;
		cout<<" Section= " <<s[a].section<<endl;
	}
	
	
	
	return 0; 
}