#include<iostream>
#include<string>
using namespace std;
class Data{
	private:
		string*name;
		int*age;
		int*std;	
		
		float*percentage;
		string*result;
		public:
			Data(string iname, int a, int s, float per, string r)
			{ name= new string;
		      age=new int;
		      std=new int;
		     percentage=new float;
		      result=new string;
		      
		    *name=iname;
		    *age=a;
		    *std=s;
		    *percentage=per;
		    *result=r;
			}
			void display()
		{
			cout<<" DETAILS OF THE EACH STUDENT"<<endl<<endl;
			cout<<"name of the student is = "<<name<<endl;
			cout<<" age of the student = "<< age<<endl;
			cout<<" studying in the class = "<<std<<endl;
			cout<<" percentage of the marks = "<<percentage<<endl;
			cout<<" overoll result = "<<result<<endl;
			
		}
		~Data()
		{
			delete name;
			delete age;
			delete std;
			delete percentage;
			delete result;
			cout<<" all the data are released"<<endl;
		}
};
int main()
{
	Data*rajia= new Data("chenchu", 24, 10, 86.7, "pass");
	
	 rajia->display();
	return 0;
}
