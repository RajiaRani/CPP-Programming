#include<iostream>
#include<string>
using namespace std;
class Human{ public:
	string name;
	void introduce(){
		cout<<"hello,everyone my name is "<<name<<endl;
	};
};
int main()
{
	Human rajia;
	Human*roma= new Human();
	rajia.name="RAJIA SYAL";
	rajia.introduce();
	
	roma->name="ROMA SYAL";
	roma->introduce();
	return 0;
	
	
	}