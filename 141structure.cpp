#include<iostream>
using namespace std;
struct student{ int rollno; char sex;
};
int main()
{
	student roma,laddi,chenchu,rajia={2324,'f'};
	
	roma.rollno=2324;
	roma.sex='f';
	laddi.rollno=2325;
	laddi.sex='m';
	chenchu.rollno=2326;
	chenchu.sex='m';
	rajia.rollno=2327;
	rajia.sex='f';
	cout<<roma.rollno<<endl<<roma.sex<<endl;
	cout<<laddi.rollno<<endl<<laddi.sex<<endl;
	cout<<chenchu.rollno<<endl<<chenchu.sex<<endl;
	cout<<rajia.rollno<<endl<<rajia.sex<<endl;
	
	return 0;
}