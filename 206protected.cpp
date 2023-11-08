 #include<iostream>
 #include<string>
 using namespace std;
  class Person{
  	protected:
  		string name;
  		
  		public:
  			void setName(string iname){
  				name=iname;  }
  			
  };
  class Human : public Person
  {
  	public:
  		void display()
  		{cout<<name<<endl;
		  }
  		
  };
  int main()
  {
  	Human rajia;
  	rajia.setName("chenchu");
  	
  	rajia.display();
  	
  	return 0;
  }