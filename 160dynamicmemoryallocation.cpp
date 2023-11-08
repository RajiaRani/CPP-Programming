 #include<iostream>
 using namespace std;
 int main()
 {
 	int*pointer=NULL;
 	cout<<"how many students you gonna enter"<<endl;
 	int input;
 	cin>>input;
 	pointer=new int[input];
 	int temp;
 	for(int counter=0;counter<input;counter++)
 	{cout<<"enter the student"<<counter+1;
 	cin>>temp;
 	*(pointer+counter)=temp;}
 	cout<<"the students you have entered "<<endl;
	 for(int counter=0;counter<input;counter++)
	 {cout<<counter+1<<"student is"<<*(pointer+counter)<<endl; }
	 delete[]pointer;
	 return 0;
 }