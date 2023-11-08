#include<iostream>
#include<string>
using namespace std;
class Student{private:
	string name;
	int std;
	int marks;
	string result;
	public:
		Student()
		{name="noname";
		std=0;
		marks=0;
		result="noresult";
		}
		
		friend ostream &operator<<(ostream &output,Student &s );
		friend istream &operator>>(istream &input, Student &s);
};

ostream &operator<<(ostream &output,Student &s )
{
	cout<<"detalis of the students "<<endl;
	cout<<"Name of the student -> "<<s.name<<endl;
	cout<<"Class of the student -> "<<s.std<<endl;
	cout<<"Marks of the student -> "<<s.marks<<endl;
	cout<<"Result of the student -> "<<s.result<<endl;
	return output;
}
istream &operator>>(istream &input , Student &s)
{
	input>>s.name>>s.std>>s.marks>>s.result;
	return input;
}

int main()
{
	cout<<"overall details of the each student is above "<<endl;
	Student chu;
	cin>>chu;
	cout<<chu;
	return 0;
}










