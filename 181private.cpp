#include<iostream>
using namespace std;
class Human {
     private:
	int age()
	{	return age-4;};
	
	public:
		void screenAge()
		{cout<<age()<<endl;
		}
		void setage(int value)
		{age=value;
		};
};
int main()
{
	Human rajia;
	rajia.setage(26);
	rajia.screenAge();
	return 0;
}