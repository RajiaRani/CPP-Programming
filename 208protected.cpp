#include<iostream>
#include<string>
using namespace std;
class Data{
	protected:
		string schoolname;
		string teachername;
		string DOB;
		char sex;
		string qualification;
		public:
			void setSN(string sname) { schoolname=sname;}
			void setTN( string tname){ teachername=tname;}
			void setD(string d){ DOB=d;}
			void setS(char s){ sex=s;}
			void setQ( string q){ qualification=q;} };
			
			class Teacher : public Data
			{
				public:
					void display()
					{
						cout<<"CANDIDATE DETAILES "<<endl<<endl;
						cout<<"1. Name of the school - "<<schoolname<<endl;
						cout<<"2. Name of the teacher   - "<<teachername<<endl;
						cout<<"3. Date of birth - "<<DOB<<endl;
						cout<<"4. Sex - "<<sex<<endl;
					    cout<<"5. Qualifucatin - "<<qualification<<endl;	
						
					}
			};
		int main()
		{
			Teacher chu;
			chu.setSN("Khalasa school");
			chu.setTN("RAJIA SYAL");
			chu.setD("28-02-1996");
			chu.setS('f');
			chu.setQ("M.Sc chemistry");
			chu.display();
			return 0;		}