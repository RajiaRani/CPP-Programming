#include<iostream>
using namespace std;
int main()
{
	int age=34;
	switch(age)
	{
		case 1 ... 34:
			{cout<<"the range of "<<age<<"lies between 1 and 77";
			break ;
			}
		case 84:{cout<<"this age is big";
			break;
		}
		default:{cout<<"i dont know the exact age";
			break;
		}
	}
	return 0;
}