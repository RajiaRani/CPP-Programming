#include<iostream>
#include<string>
using namespace std;
class Mobile{public:
	string brandname;
	string modalname;
	void setBrandname(string bname){brandname=bname;}
	void setModalname( string mname){modalname=mname;}
	
};
class Price: public Mobile
{
	public:
		int cost;
		void setCost(int c){cost=c;}
		void screen()
		{
			cout<<" The brandname of the mobile is "<<brandname<<endl;
			cout<<" The modalname of the mobile is "<<modalname<<endl;
			cout<<" The total cost of the mobile is "<<cost<<endl;
		}
};
int main()
{
	Price rajia;
	rajia.setBrandname("Apple");
	rajia.setModalname("iphone 13 pro ");
	rajia.setCost(122000 );
	rajia.screen();
	return 0;
}