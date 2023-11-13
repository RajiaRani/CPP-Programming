//In C++ programming language, identifiers are the unique names assigned to variables, functions, classes, structs, or other entities within the program.

#include<iostream>
using namespace std;


// here std_12 identifier used to refer the below class
class std_12{
    string name;
    int roll_no;
    int position;
};

//calculateSum identifier used to refer the below code
void calculateSum(int a, int b)
{
    int _sum = a+b;
    cout<<"The sum is : "<< _sum<<endl;
}

int main()
{
    //identifiers used as a variable names
    string student_name = "Rajia Rani";
    int stanadard = 12;

    calculateSum(10,78);
    return 0;
}