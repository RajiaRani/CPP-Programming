#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	//take any randon numbers
	int num1, num2;
	cout<<"Enter any two random number"<<endl;
	cin>>num1;
	cin>>num2;

	//apply the divide formula
	int divide = num1/num2;

	//final output is
	cout<<"The final answer is: "<<divide<<endl;
	return 0;
}