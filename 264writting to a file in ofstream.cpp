#include<iostream>
#include<fstream>
using namespace std;
int main()
{ofstream file("chenchu.text");
if(!file.is_open())
{cout<<"having some error "<<endl;
}
else
{file<<"My name is rajia "<<endl;
file<<"I am 26 years old "<<endl;
file.close();
cout<<"file open without any error and open it and chect it  ";
}
return 0;
}