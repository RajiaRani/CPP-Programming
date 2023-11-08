#include<iostream>
#include<string>
using namespace std;
class Data{public:
	 virtual void enter()
	{cout<<"the data which we entered is "<<endl;}
	};
	class Roughdata:public Data
	{public:
		void enter()
		{cout<<"rough data is entered "<<endl;}
	};
	class Finaldata:public Roughdata
	{public:
		void enter()
		{
			cout<<"Final data is entered "<<endl;}
	};
	void whosThis(Roughdata & r)
	{ r.enter();}
	int main()
	{Finaldata rajia;
	Data ajia;
	whosThis(rajia);
	return 0;
	}