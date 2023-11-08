#include<iostream>
using namespace std;
float screen(float,float);
int main()
{ float result;
result=screen(34.5, 24.5);
cout<<" the value of the result is="<<result;
return 0;
	
}
float screen( float a, float b)
{
	cout<<a<<endl<<b<<endl;
	return a-b;
	}