 #include<iostream>
#include<string>
using namespace std;
class Human{
	protected:
		string name;
		char sex;
		string address;
		string mobileno;
		
		public:
			void setName(string n){ name=n;}
			void setSex(char s){ sex=s;}
			void setAddress(string addr){ address=addr;}
			void setMobileno(string mno){ mobileno=mno;}
};
class Student : private Human 
{
	public:
		void display()
		{
			cout<<" PATIENT DETAILS "<<endl<<endl;
			cout<<" Name "<<name<<endl;
			cout<<" Sex "<<sex<<endl;
			cout<<" Address "<<address<<endl;
			cout<<" Mobile_No "<<mobileno<<endl;
		}
		
		void studentsetName(string n){ setName(n);}
		void studentsetSex(char s){ setSex(s);}
		void studentsetAddress(string addr){ setAddress(addr);}
		void studentsetMobileno(string mno){ setMobileno(mno);}
		
};
class GStudent : public Student
{
	public:
	
	void SetGStudentName(string n){studentsetName(n);}
	void SetGStudentSex(char s){ studentsetSex(s);}
	void SetGStudentAddress(string addr){ studentsetAddress(addr);}
	void SetGStudentMobileno(string mno){ studentsetMobileno(mno);}
};
int main()
{
	GStudent rajia;
	rajia.SetGStudentName("ROSHNI");
    rajia. SetGStudentSex('f');
	rajia. SetGStudentAddress(" New Modal Town , Jalandhar");
	rajia.SetGStudentMobileno("9765324168");
	rajia.display();
	return 0;}
