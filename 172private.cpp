#include<iostream>
using namespace std;
class Human{ private:
	int age;
	public:
		void displayAge(){cout<<age<<endl;
		}
		void Setage(int value)
		{
		age=value;}
};

int main()
{
	Human rajia;
	rajia.Setage(26);
	rajia.displayAge();
		return 0;
}