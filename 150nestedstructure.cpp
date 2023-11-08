#include<iostream>
#include<string>
using namespace std;
struct address{ int houseno; string streetname;
};
struct student{ string name; int rollno; address addr;
};
int main()
{
	student rajia;
	rajia.name="Rajia";
	rajia.rollno=4543;
	rajia.addr.houseno=91;
	rajia.addr.streetname="janak nagar basti sheikh ,jalandhar";
	cout<<rajia.name<<endl<<rajia.rollno<<endl<<rajia.addr.houseno<<endl<<rajia.addr.streetname<<endl;
	return 0;
}