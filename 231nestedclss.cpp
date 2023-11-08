#include<iostream>
#include<string>
using namespace std;
class Person{public:
		string name;

class Address{public:

	string countryname;
	string stname;
	int houseno;
	
};
Address addr;
void display()
{cout<<"My name is "<< name<<endl;
cout<<"lives in "<<addr.countryname<<endl;
cout<<"street name "<<addr.stname<<endl;
cout<<"house no."<<addr.houseno<<endl;
};
};
int main()
{Person raju;
raju.name="RAJIA SYAL";
raju.addr.countryname="INDIA";
raju.addr.stname="janak nagar";
raju.addr.houseno=91;
raju.display();
return 0;
	 
}
