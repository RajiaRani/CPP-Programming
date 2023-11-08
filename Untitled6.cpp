#include<iostream>
#include<string>
using namespace std;
class Subject{public:
	virtual void show()=0;
};
class Math: public Subject
{ public:
	void show()
	{cout<<"You have taken the math subject "<<endl;}
};
int main()
{
	Math raj;
	raj.show();
	return 0;}