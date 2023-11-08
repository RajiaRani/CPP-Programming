#include<iostream>
#include<string>
using namespace std;
class Student{ private:
	string name;
	int std ;
	int rollno;
	string grade;
	string result;
	public:
	Student(){ 
	    name="RAJIA";
    	std=10;
    	rollno=1245;
    	grade="A+";
    	result="PASS";
	
	}
    student	(string n, int s,int r_no, string g, string r)
     
    
    {
		name=n;
    	std=s;
    	rollno=r_no;
    	grade= g;
    	result=r;
	}

	void studentdata()
	{
		cout<<"name of the student = "<<name<<endl;
		cout<<"class of the student = "<<std<<endl;
		cout<<"roll number of the student =  "<<rollno<<endl;
		cout<<"grade which he/she got = "<<grade<<endl;
		cout<<"overall result = "<<result<<endl;
		}
	};
int main()
{ Student student1 ;
student1.studentdata();

return 0;
	
}