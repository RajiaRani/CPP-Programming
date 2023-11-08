 #include<iostream>
#include<string>
using namespace std;
class Human{protected:
	string name;
	public:
		Human( string n){cout<<"1.My name is Rajia Reddy."<<endl;
		name=n;
		}
};
class Woman: Human
 {public:
 	Woman(string y):Human(y)
 	{cout<<"2.I have done my master in chemistry."<<endl; }
 	void display()
 	{
 		cout<<"3.Name of my college is "<<name<<endl;
	 }
 };
 int main()
 {
 	Woman chu(" lovely proffectional univercity ");
 	chu.display();
 	return 0;
 }