#include<iostream>
#include<string>
using namespace std;
class Human{ private:
	string name;
	int age;
    public:
	Human()
	
	{name="noname";
	age=10;
	cout<<"constructor is called when you create an object of Human "<<endl;
	}
	void display()
	{
		cout<<name<<endl<<age<<endl;
	}
};
int main(){
	Human rajia;
	rajia.display();
		return 0;
}