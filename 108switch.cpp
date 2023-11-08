#include<iostream>
using namespace std;
int main()
{
	char bloodgroup='O';
	switch(bloodgroup)
	{
		case 'A':{cout<<"this group of blood is present";
			break;
		}
		case 'B':{cout<<"this group of blood has only two botals present";
			break;
		}
		default:{cout<<"sorry this blood group is absent";
			break;
		}
	}
	return 0;
}