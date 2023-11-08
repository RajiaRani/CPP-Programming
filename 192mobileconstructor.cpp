#include<iostream>
#include<string>
using namespace std;
class Mobile{
	private:
		string brandname;
		string modalname;
		string colour;
		int stroage;
		double price;
		
		public:
			Mobile()
		
		{ 
		brandname= "Apple";
		 modalname= "iPhone11";
		 colour="White";
		 stroage=64;
		 price=41990;
		};
	Mobile( string bname, string mname, string c, int s, double p)
		{ 
		brandname=bname;
		 modalname=mname;
		 colour=c;
		 stroage=s;
		 price=p;
		}
		
		
		void data( string bname, string mname, string c, int s, double p)
		{ 
		brandname=bname;
		 modalname=mname;
		 colour=c;
		 stroage=s;
		 price=p;
		}
		void display()
		{
			cout<<"DETAILS OF THE MOBILES"<<endl;
			cout<<" Bandname="<<brandname<<endl;
			cout<<" Modalname="<<modalname<<endl;
			cout<<" Colour ="<<colour<<endl;
			cout<<" Stroage ="<<stroage<<endl;
			cout<<"Price= "<<price<<endl;
			
		}
};
int main()
{
	 Mobile mobile1,mobile2("sumsang", "Sumsung glaxy", " black", 128, 14990),mobile3("One plus", "one plus nord", " white", 8 , 1299);
	mobile1.display();
    mobile2.display();
    mobile3.display();
	return 0;
}