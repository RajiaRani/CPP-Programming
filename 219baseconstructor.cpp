 #include<iostream>
#include<string>
using namespace std;
class Father{protected:
	int height;
	public:
	Father(int h)
	{cout<<"constructor of the father is called "<<endl;
	height=h;}
};
class Child:Father
{public:
	Child(int x):Father(x)
	{cout<<"child class constructor "<<endl;}
	void display()
	{cout<<"Height is "<<height<<endl;}
};
int main()
{
	Child rajia(5);
	rajia.display();
	return 0;
}