#include<iostream>
using namespace std;
int main()
{
	int num[50],n, x, i, j, count;
	 cout<<"enter the size of the array-> ";
	 cin>>n;
	 cout<<"enter the  array is ";
	 for(int i=0; i<n;i++){cin>>num[i];}
	 cout<<"enter the element whuch is to delete -> ";
	 cin>>x;
	 for(int i=0; i<n;i++)
	 {
	 	if(num[i]== x)
	 	
		 for(j=i; j<n-1; j++){num[j]=num[j+1];
		 count++;
		 i--;
		 n--;}
	 	
	 	
	 }
	 if(count==0)
	 cout<<"enter element is doesnt exists ";
	 else
	 cout<<"enter element is successfully deleted ";
	 cout<<num[i]<<"  ";
	 return 0;
}