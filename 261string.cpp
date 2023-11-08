#include<iostream>
using namespace std;
int main()
{
	string name("rajia syal ");
	cout<<name<<endl;
	name.append ("reddy");
		cout<<name<<endl;
		cout<<name.size()<<endl;
		name.insert(0,"Am ");
			cout<<name<<endl;
				cout<<name.substr(7)<<endl;
				name.erase(1,4);
					cout<<name<<endl;
		return 0;
	
}