#include<iostream>
#include<string>
using namespace std;
class Human{
	private:
	string name;
	int age;
	public:
		Human(){cout<<"default constructor"<<endl;
		name="noname";
		age=0;
		}
		Human(string iname, int iage=26)
		{
			cout<<"overloading constructor"<<endl;
			name= iname;
			age = iage;
		}
		void speakup(){
			cout<<name<<endl<<age<<endl;
		}
};
int main()
{
	Human rajia(" CHENCHU", 24);

		rajia.speakup();
	return 0;
	
}