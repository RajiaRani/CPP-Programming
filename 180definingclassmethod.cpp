#include<iostream>
#include<string>
using namespace std;
class Human{public:
	string name="NO NAME";
	void introduce();
};
 void Human :: introduce()
 {
 	cout<<Human::name<<endl;
 };
 int main()
 {
 	Human rajia;
 	rajia.introduce();
	 return 0; }