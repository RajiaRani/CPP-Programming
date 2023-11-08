#include<iostream>
#include<string>
using namespace std;
class Person{private:
	int age;
	public :
		void setAge(int age){this->age=age;		}
		void showAge(){cout<<this->age<<endl;
		}
	
};
int main()
{
	Person chu;
	chu.setAge(24);
	chu.showAge();
	return 0 ;
}