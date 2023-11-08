#include<iostream>
using namespace std;
class Student{
	private:
		int a[300], size, elem, pos, num, found, del, j, i;
		public:
			void FinalArray()
			{cout<<"Enter the size of the array";
			cin>>size;
			cout<<"Enter the array"<<endl ;
			for (int i=0; i<size;i++)
			{cin>>a[i];}
		}
			void Element()
			{cout<<"enter the element which you want to delete";
			cin>>elem;
			for(int i=0;i<size;i++)
			{
				if(a[i]==elem){
				
				for(int j=i; j<(size-1); j++)
				a[j]=a[j+1];
			    found++;
				
				
			}
			}
			if(found==0)
			cout<<"Enter element doesnt exists in the arrary ";
			else
			cout<<"element deleted successufully";
			cout<<endl;
			
			}
		
				void Finaldata()
				{
				cout<<"final array after the delection ";
				for (int i=0; i<size-1;i++)
				cout<<a[i]<<"  ";
				}
				
			
};
int main()
{
 Student obj;
 obj.FinalArray();
 obj.Element();
 obj.Finaldata();
 return 0;
	
}