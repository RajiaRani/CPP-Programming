#include<iostream>
#include<string>
using namespace std;
class Subject1{protected:
	string subname1;
	public:
		Subject1(){cout<<"1.Subject which you have selected."<<endl;}
};
class Subject2{protected:
	string subname2;
	public:
		Subject2(){cout<<"2.After taken the subject you cant replace it ."<<endl;}
};
class Subject3{protected:
	string subname3;
	public:
		Subject3(){cout<<"3.The list of your subjects is given bellow "<<endl;}
};
class Final:public Subject1,public Subject2,public Subject3
{public:
	Final(string sn1,string sn2,string sn3):Subject1(),Subject2(),Subject3()
	{subname1=sn1;
	subname2=sn2;
	subname3=sn3;
	cout<<"THE FINAL LIST IS "<<endl;}
	void display()
	{cout<<"1."<<subname1<<endl<<"2."<<subname2<<endl<<"3."<<subname3<<endl;}
	
};
int main()
{
	Final chu("Chemistry","Physics","Mathmatics");
	chu.display();
	return 0;
}
