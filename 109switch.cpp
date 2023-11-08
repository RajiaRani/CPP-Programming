#include<iostream>
using namespace std;
int main()
{
	int x=30;
	switch(x){
	

		case 1 ... 99:{cout<<"the value"<<x<<"is between 1 and 99";
		break;}
	
	case 200:
		{cout<<"the second statement value";
		break;}
		
	default:
	{cout<<"default case statement";
		break;}
	}

	return 0;
}