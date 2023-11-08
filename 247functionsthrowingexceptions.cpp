#include<iostream>
#include<stdexcept>
using namespace std;
void test() throw(int , char, runtime_error)
{ throw 78;
}
int main()
{try{test();}
catch(int a){cout<<"total students of class 10th is  "<<a<<endl;}
catch(char sex){cout<<"total male student in class 10th is 34 "<<sex<<endl;}
catch(runtime_error d){cout<<"the runtime error is "<<d.what()<<endl;}
return 0;
}