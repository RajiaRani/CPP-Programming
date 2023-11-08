 #include<iostream>
 #include<string>
 using namespace std;
 class Student{private:
 	
 	int marks;
 
 	public:
 		Student( int m)
 		
		 {
 		marks=m;
 	
 		cout<<"the overoll result is "<<endl;
		 }
void data()
{
cout<<" you got the total marks is "<<marks<<endl;
	 }; 	
	 	Student operator ()( int mk)
 		
		 { 
		
 		marks=mk;
 	
 		cout<<"the overoll result is "<<endl;
 		return *this ;
		 }
	 
 };
 int main()
 {  
 	Student rajmarks(90);
 	
 	
 	rajmarks.data();
 
 
 
 
 	return 0;
 }