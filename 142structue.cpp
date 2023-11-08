#include<iostream>
using namespace std;
struct total{ int age;
 char gender;
bool statement;
};
int main()
{
	total R1,R2,R3,R4,R5,R6,R7={23,'m',false};
	R1.age=23;
	R1.gender='m';
	R1.statement=true;
	R2.age=25;
	R2.gender='m';
	R2.statement=true;
	R3.age=78;
	R3.gender='f';
	R3.statement=true;
	R4.age=29;
	R4.gender='f';
	R4.statement=true;
	R5.age=89;
	R5.gender='m';
	R5.statement=false;
	R6.age=21;
	R6.gender='m';
	R6.statement=true;
	R7.age=26;
	R7.gender='m';
	R7.statement=false;
	cout<<R1.age<<endl<<R1.gender<<endl<<R1.statement<<endl;
	cout<<R2.age<<endl<<R2.gender<<endl<<R2.statement<<endl;
	cout<<R3.age<<endl<<R3.gender<<endl<<R3.statement<<endl;
	cout<<R4.age<<endl<<R4.gender<<endl<<R4.statement<<endl;
	cout<<R5.age<<endl<<R5.gender<<endl<<R5.statement<<endl;
	cout<<R6.age<<endl<<R6.gender<<endl<<R6.statement<<endl;
	cout<<R7.age<<endl<<R7.gender<<endl<<R7.statement<<endl;

	return 0;
	
}