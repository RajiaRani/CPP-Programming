#include<iostream>
#include<string>
using namespace std;
class Student{
	private:
		string name;
		int std;
	    char sex;
	    string result;
	    public:
	Student()
	{cout<<"default"<<endl;
		name= "ROMA";
		std=10;
		sex='m';
		result="Pass";
	}
	   Student(string iname, int s, char g, string iresult)  
		{ name=iname;
		std=s;
		sex=g;
		result= iresult;
		}
	    
		void dataset( string iname, int s, char g, string iresult) 
		{ name=iname;
		std=s;
		sex=g;
		result= iresult;
		}
		void display(){
			cout<<" details of the students is"<<endl;
			cout<<"1. name of the student = "<<name<<endl;
			cout<<"2. class of the student = "<<std<<endl;
			cout<<"3. sex of the student = "<<sex<<endl;
			cout<<"4. result = "<<result<<endl;
		}
};
int main()
{
	Student student1("Roma", 10, 'f', "PASS"),student2("laddi",12, 'm', "pass"),student3("chenchu", 12, 'm',"pass");
	student1.display();
	student2.display();
	student3.display();
	return 0;
}/