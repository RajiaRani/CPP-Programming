 #include<iostream>
#include<string>
using namespace std;
class Student1{public:
	Student1(){cout<<"Result of the Student1 is decleared "<<endl;}
	~Student1(){cout<<"Result of the Student1 is not decleared yet "<<endl;}
};
class Student2{public:
	Student2(){cout<<"Result of the Student2 is decleared "<<endl;}
	~Student2(){cout<<"Result of the Student2 is not decleared yet "<<endl;}
} ;
int main(){
	Student1 rajia;
	return 0;
}