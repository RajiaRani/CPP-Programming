#include<iostream>
using namespace std;
int main()
{int x=30;
switch(x)
{

   
	 case 10:
	case 20:
	case 30: {cout<<" this is the first statement value";
		break;}
		
	case 200:
	case 400:
	
	{ cout<<"the second statement value";
		break;
	}
	default:{cout<<"we dont know the statement";
		break;
	}
}
	return 0;
}