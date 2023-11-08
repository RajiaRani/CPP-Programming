#include<iostream>
#include<string>
using namespace std;
class Human{ private:
	string *name;
	int *age;
	string study;
	public:
		Human( string iname, int iage,string istudy){
			name=new name;
			age=new age;
			sex=new sex;
			*name=iname;
			*age=iage;
			*study=istudy;
		}
		void display()
		{cout<<"Hello everyone, my name is"<<*name<<"and i am "<<*age<<"years old"<<"i have done my "<<*study<<endl;
		}
		~Human()
		{
			delete name;
			delete age;
			delete study;
			cout<<"all memeroiers are released"<<endl;
		}
};
int main()
{
Human*rajia=new human("chenchu",24);
rajia->display();
return 0;}