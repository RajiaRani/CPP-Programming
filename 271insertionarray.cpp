#include<iostream>
using namespace std;
class InsertInAarry
{
	private:
		int arr[100], size, position;
		public:
			void getAarry()
			{
				cout<<"enter the size of the array ";
				cin>>size;
				cout<<"enter array elements ";
				
				for(int a=0; a<size; a++)
				{
					cin>>arr[a];
				}
			}
		
			
	void Elementinsertion()
	{
		cout<<"enter the new element position "<<endl;
		cin>>position;
		int num;
		if( position>=0 && position<=(size-1))
		{
			cout<<"enter the number that is insert ";
			cin>>num;
			arr[position]=num;
			size++;
		}
		else
		{
			cout<<" the position does not exists ";
			
		}
	}
		void Display()
		{
			cout<<"array element after insertion of nw element ";
			for(int i=0; i<size;i++)
			cout<<arr[i]<<"    ";
			
		}
	
	
};
		int main()
		{
		InsertInAarry raju;
		raju. getAarry();
		raju.Elementinsertion();
		raju. Display();
		
		return 0;
			
		}
			
