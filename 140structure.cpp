#include<iostream>
using namespace std;
struct students{
	int rollno;
	 char sex;
	
};
int main()
{
	students rajia,roma={2312,'f'};

rajia.rollno=2312;
rajia.sex='f';
roma. rollno=2313;
roma.sex='f';
cout<<rajia.rollno<<endl<<rajia.sex<<endl;
cout<<roma.rollno<<endl<<roma.sex<<endl;
return 0;
}