#include<iostream>
using namespace std;
int main()
{
	int age='24';
	switch(age)
	{
		case '17':{ cout<<"you are to young"<<endl;
			
			break;
		}
		case '34':{ cout<<" you are not suitable for this"<<endl;
			break;
		}
		case '24':{cout<<"you are selected"<<endl;
			break;
	}
	return 0;
		default:{cout<<" we are dont know about this"<<endl;
			break;
		}
			
	}
	
}