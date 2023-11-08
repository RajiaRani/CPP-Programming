#include<iostream>
using namespace std;
void display();
void display(string);
int main()
{
	display();
	display("RAJIA");
	return 0;
	}
	void display()
	{
		cout<<"what are you doing,am waiting for you"<<endl;
	}
	void display(string name)
	{
		cout<<"what are you doing ,am waiting for you"<< endl<<name<<endl;
	}