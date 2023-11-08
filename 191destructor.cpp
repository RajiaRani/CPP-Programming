#include<iostream>
#include<string>
using namespace std;
class car{
	private:
	string companyname;
	string modalname;
	string fueltype;
	float mileage;
	double price;
	
	public:
		car( ){
		 companyname="Toyota";
		 modalname="altis";
		 fueltype="petrol";
		 mileage=15.5;
		 price=150000;
		 };
		
		car(string cname,string mname, string ftype, float m, double p){
		companyname= cname;
		modalname= mname;
    	fueltype= ftype;
    	mileage=m;
    	price =p;
		}
    void Setdata( string cname ,string mname, string ftype, float m, double p)
    {
    	companyname= cname;
    	modalname= mname;
    	fueltype= ftype;
    	mileage=m;
    	price =p;
	}
	
	void display()
	{
	    cout<<"car properties is"<<endl;
		cout<<" Name of the company = "<<companyname<<endl;
		cout<<" Name of the modal = "<<modalname<<endl;
		cout<<" Type of the fuel  = "<<fueltype<<endl;
		cout<<" Milage of the car = "<<mileage<<endl;
		cout<<" Total price  = "<<price<<endl;
	}
		
};
int main()
{
	car car1,car2( "Toyota","Fortuner", "diesel",10, 340000);
	car1.display();
	car2.display();
	return 0; 
	}