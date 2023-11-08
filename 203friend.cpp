#include<iostream>
#include<string>
using namespace std;
class Human{ private:
	string name;
	int age;
	string result;
	public:
		Human(string iname, int a, string r){
			name=iname;
			age=a;
			result=r;
		}
		void showme(Human classname){
			cout<<name<<endl<<age<<endl<<result<<endl;
		}
		friend  class classname ;
};
void screen(Human man)
{
	cout<<man.name<<endl;
	cout<<man.age<<endl;
	cout<<man.result<<endl;
}
int main()
{
	Human rajia("CHENCHU", 24, "FAIL");
	screen(rajia) ;
	return 0;
}
