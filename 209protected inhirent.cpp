  #include<iostream>
  #include<string>
using namespace std;
class Person {
	protected:
		string name;
		int std;
		char section;
		int rollno;
		public:
			void setName(string n){ name=n;}
			void setSTD(int s ){ std=s;}
			void setSection(char sec ){ section=sec;}
			void setRollno(int rno){ rollno=rno;}
			
	};
	class Student : protected Person
	{
		public:
		void display()
		{
			cout<<"DETAILS OF THE STUDENTS "<<endl<<endl;
			cout<<" 1.Student Name -> "<<name<<endl;
			cout<<" 2.Class  -> "<<std<<endl;
			cout<<" 3.Section -> "<<section<<endl;
			cout<<" 4.RollNumber -> "<<rollno<<endl;
			
		}
		void setStudentName(string n){setName(n);}
		void setStudentSTD(int s){setSTD(s);}
		void setStudentSection(char sec){setSection(sec);}
		void setStudentRollno(int rno){setRollno(rno);}
	  } ;
	  int main()
	  {
	  	Student rajia;
	  	rajia.setStudentName("CHENCHU");
	  	rajia.setStudentSTD(10);
	  	rajia.setStudentSection('A');
	  	rajia.setStudentRollno(1245);
	  	rajia.display();
	  	
	  	return 0;
	   } 