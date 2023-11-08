#include<iostream>
#include<string>
using namespace std;
void Studentlist();
int main(){
	Studentlist();
	return 0;
	
}
void Studentlist(){

class Student{public:
	string name;
	int std;
	char sex;
	string result;
	void Totalresult()
	{cout<<"Student Name-> "<<name<<endl;
	cout<<"Class-> "<<std<<endl;
	cout<<"Gender-> "<<sex<<endl;
	cout<<"Result-> "<<result<<endl;
	}
};
Student chu;
chu.name="Chenchu Reddy";
chu.std= 10;
chu.sex='m';
chu.result="PASS";
chu.Totalresult();
}