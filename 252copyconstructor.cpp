#include<iostream>
#include<string>
using namespace std;
class Student{public:
	string *name;
	int std;
	string result;
	Student(string name, int std, string result){
		this->name=new string(name);
		this->std=std;
		this->result=result;
	}
	void changeNameandStdandResult(string name, int std, string result){
		*(this->name)=name;
		this->std=std;
		this->result=result;}
		
		void Data()
		{
			cout<<"Student name is "<<*name<<" and he/she studied in class "<<std<<". Overoll result of your child is "<<result<<endl;
		}
	
};
int main()
{
	Student chu("RAJIA", 10, "PASS ");
	chu.Data();
	Student duplicatechu =chu;
	duplicatechu.Data();
	chu.changeNameandStdandResult("CHENCHU REDDY", 12, "FAIL");
	chu.Data();
	duplicatechu.Data();
	chu.changeNameandStdandResult("ROMA RANI", 11, "PASS");
	chu.Data();
	duplicatechu.Data();
	chu.changeNameandStdandResult("LOVEPREET SINGH", 10,"FAIL");
	chu.Data();
	return 0;
}