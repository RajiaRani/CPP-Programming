#include<iostream>
#include<string>
using namespace std;
struct address{ int bulding_no;
string areaname;
string mailname;
};
struct student{ string name; int roll_no; int age;
int studying; string result; float percentage; string phone_no; address addr;
};
int main()
{
	student chenchu;
	chenchu.name="CHENCHU REDDY";
	chenchu.roll_no=2313;
	chenchu.age=24;
	chenchu.studying=12;
	chenchu.result="Pass";
	chenchu.percentage=87.9;
	chenchu.phone_no= "9056793438";
	chenchu.addr.bulding_no=53;
	chenchu.addr.areaname= "banjara hills";
	chenchu.addr.mailname= "chenchur143@gmail.com";
	cout<<chenchu.name<<endl;
	cout<<chenchu.roll_no<<endl;
	cout<<chenchu.age<<endl;
	cout<<chenchu.studying<<endl;
	cout<<chenchu.result<<endl;
	cout<<chenchu.percentage<<endl;
	cout<<chenchu.phone_no<<endl;
	cout<<chenchu.addr.bulding_no<<endl;
	cout<<chenchu.addr.areaname<<endl;
	cout<<chenchu.addr.mailname<<endl;
	return 0;
	
}