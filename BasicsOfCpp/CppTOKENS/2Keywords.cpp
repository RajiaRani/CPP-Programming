//In C++, a keyword token refers to a reserved word that has a special meaning in the language. These keywords are part of the language's syntax and cannot be used as identifiers (e.g., variable names). Examples of C++ keywords include int, if, else, while, class, return, and many others.
//there are 95 keywords

#include<iostream>
#include<math.h>
using namespace std;


/* Exapmple 1:
int main()
{
    //variable declaration
    int n = 2;

    switch(n)
    {
        case 1: cout<<"Computer Network";
                cout<<endl;
                break;
        case 2: cout<<"C++";
                cout<<endl;
                break;
        case 3: cout<<"Computer";
                cout<<endl;
                break;
        case 4: cout<<"Computer Application";
                cout<<endl;
                break;
    }
    return 0;
}
*/
//Example 2:
int main()
{
int integerVar = 10;
float floatVar = 3.12;
double doubleVar = 2.56786;
char charVar = 'A';
string stringVar = "Rajia Rani";

if( integerVar < 5)
{
    std :: cout<< " The number is Not greater than 5"<< std::endl;
}
    else
    {
      std :: cout<<" The number is Greater than 5" <<std::endl;
    }

for(int i=0;i<5;++i)
{
    std::cout<< i <<" ";
}
std::cout<<std::endl;

int sum(int a, int b) {
        return a + b;
    }

    std::cout << "Sum of 3 and 4 is: " << sum(3, 4) << std::endl;

  // Class and object
    class MyClass {
    public:
        void printMessage() {
            std::cout << "Hello from MyClass!" << std::endl;
        }
    };

    MyClass myObject;
    myObject.printMessage();

return 0;
}

//This program demonstrates the use of various keywords such as int, float, double, char, if, else, for, class, return, public, private, void, and std::cout. 
//Keep in mind that there are more keywords in C++ not covered in this example.
