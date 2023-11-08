#include<iostream>
#include<string>
using namespace std;
class Human{ private:
	string name;
	int age;
	public:
	Human(){cout<<"default constructor"<<endl;
	name="NO NAME";
	age=0;
	}
	Human(string iname)
	{
		cout<<"constructor with name as a parameter"<<endl;
		name=iname;
		age=0;
	}
	Human(int iage){
		cout<<"constructor with age as a parameter"<<endl;
		name= "noname";
		age=iage;
	}
	Human(string iname, int iage){
		cout<<"constructor with name and age as a parameter"<<endl;
		name= iname;
		age= iage;
	}
	void display()
	{cout<<name<<endl<<age<<endl;
	
	}
	
};
int main()
{
	Human rajia;
	rajia.display();
	Human chenchu("Chenchu",24);
	chenchu.display();

	return 0;
}