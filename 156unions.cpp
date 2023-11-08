#include<iostream>
using namespace std;
union emp{ int id;
float salary;
};
int main()
{
	emp rajia, chenchu;
	rajia.id=56;
	cout<<rajia.id<<endl;
	return 0;
}