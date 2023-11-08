#include<iostream>
#include<string>
using namespace std;
class Data{public:
	virtual void showme()=0;};
void Data ::showme()
	{cout<<" the total data is "<<endl;}
class Finaldata: public Data
{public:
	void showme(){cout<<"you entered the wrong data "<<endl;
	Data::showme();
	}
};
int main()
{
	Finaldata raj;
	raj.showme();
	return 0;
}