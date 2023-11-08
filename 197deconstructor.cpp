#include<iostream>
#include<string>
using namespace std;
class Mobile{
	private:
		string*brandname;
		string*modalname;
		int* gb;
		double*price;
		
		public:
			Mobile( string bname, string mname, int g, double p) 
			{
				brandname= new string;
				modalname= new string;
				gb= new int;
				price= new double;
				
				*brandname= bname;
				*modalname= mname;
				*gb=g;
				*price= p;
			}
			
			void screen(){
				cout<<"DETAILS OF THE MOBILES"<<endl<<endl;
				cout<<"Brandname"<<*brandname<<endl;
				cout<<"Modalname"<<*modalname<<endl;
				cout<<"Gb"<<*gb<<endl;
				cout<<"Price"<<*price<<endl;
			}
			~Mobile()
			{
        	delete brandname;
			delete modalname;
			delete gb;
			delete price;
				cout<<" all the data are released"<<endl;}
			
};
int main()
{
	Mobile*rajia()= new Mobile(" Apple", "iphone",  64, 45600);
	
	rajia->screen();
	return 0;
}