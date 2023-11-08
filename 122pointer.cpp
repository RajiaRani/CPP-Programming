#include<iostream>
using namespace std;
int main()
{
	
	char house='H.No';
	int adress=91;
	
	char*houseptr;
	int*adressptr;
	
	houseptr=&house;
	adressptr=&adress;
	cout<<house<<"-->"<<houseptr<<adress<<"-->"<<adressptr;
return 0;
}