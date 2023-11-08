#include<iostream>
#include<string>
using namespace std;
class Data{
	public:
	Data()
	{
		cout<<" my name is rajia and i am 26 years old"<<endl;
	}
	~Data()
	{
		cout<<" i did my master in chemictry"<<endl;
	}
};
int main()
{
	Data*rajia;
	rajia= new Data();
	delete rajia;
	return 0;
}