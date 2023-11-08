#include<iostream>
#include<string>
using namespace std;
class Human{public:
	Human(){
		cout<<"constructor called"<<endl;
	}
	~Human(){cout<<"destructor called"<<endl;
	}
	
};
int main()
{
	Human *rajia;
	rajia=new Human();
	
	return 0;
}