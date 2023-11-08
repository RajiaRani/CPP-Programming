#include<iostream>
#include<string>
using namespace std;
class HumanBeing{ public:
	string name;
	void introduce()
	{ cout<<"My name is "<<name<<endl;
	};
	
};
int main()
{
	HumanBeing rajia;
	rajia.name="Rajia";
	rajia.introduce();
	HumanBeing roma;
	roma.name="Roma";
	roma.introduce();
	return 0;
	
	
	
	}
