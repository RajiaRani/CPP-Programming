#include<iostream>
#include<string>
using namespace std;
class Human{public:
	string name;
	void introduce();
};
 void Human :: introduce()
 {
 	cout<<Human::name<<endl;
 };
 int main()
 {
 	Human rajia;
 	rajia.name="RAJIA";
 	rajia.introduce();
	 return 0; }