#include<iostream>
using namespace std;
int main()
{cout.setf(ios::showpos|ios::showbase|ios::showpoint);
cout.unsetf(ios::showbase);
auto flag=ios::showpos|ios::showbase|ios::showpoint;
cout.flags(flag);

cout<<100.2<<endl;
cout<<-65.3<<endl;
return 0;
}