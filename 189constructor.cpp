#include<iostream>
#include<string>
using namespace std;
class Project{
	private:
	string name;
	int rollno;
	char grade;
	string result;
public:
project();
	void studentdata(string n, int r_no ,char g,string r)
	{
		name=n;
		rollno=r_no;
		grade=g;
		result=r;
	}
	void student(){
		cout<<" student name is "<<name<<endl;
		cout<<" student roll number "<<rollno<<endl;
		cout<<" grade of the student "<<grade<<endl;
		cout<<" overoll result "<<result<<endl;
	}
		
};
int main()
{
	Project student1,student2;
	student1.student();
	student2.student();	
	return 0;
};
	