#include<iostream>
#include<string>
using namespace std;
class Student{private:
	int a[150], size,number, position, name;
	public:
		void Finalstudent()
		{
			cout<<"Enter the size of the array ";
			cin>>size;
			cout<<"enter the array ";
			
			for(int i=0; i<size; i++)
			{
				cin>>a[i];
			}
		}
		
		void Totalstudent()
		{
			cout<<"Enter the name of the array ";
			cin>>name;
			cout<<"enter the name ";
			
			for( int i=0;i<name;i++)
			{cin>>a[name];
			}
		}
		void Getarray()
		{
			cout<<"enter the position of the array where you new element insertion ";
			cin>>position;
			int number;
			if (position>=1 &&position<=size+1)
			{cout<<"Enter the number that is to insert ";
			cin>>number;
			a[position]=number;
			}
			else
			{
				cout<<"Enter the array doesnt exist ";
			}
		}
		void Display()
		{
			cout<<"Final array element after the insertion ";
			for(int i=0; i<size; i++)
			cout<<a[i]<<"  ";
		}
};
int main()
{
	Student raju;
	raju.Finalstudent();
	raju.Totalstudent();
	raju.Getarray();
	raju.Display();
	return 0;
}