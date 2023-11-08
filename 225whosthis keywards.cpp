#include<iostream>
#include<string>
using namespace std;
class Data{public:
	void enter()
	{cout<<"we are entered the total value is 2.5 lakh"<<endl;
	}
};
class Finaldata : public Data
{public:
	void enter()
	{cout<<"But we are having data only for 2 lakh "<<endl;
	}
};
void whosThis(Data* d)
{d->enter();}
int main()
{
	Finaldata rajia;
	rajia.enter();
	whosThis(&rajia);
	return 0;
}