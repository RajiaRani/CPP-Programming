 #include<iostream>
 using namespace std;
 void display(const int num[], int limit);
 int main()
 {
 	int num[]={12,56,9,11,16};
 	int limit=5;
 	display(num,limit);
 	return 0;
 }
 void display(const int num[],int limit)
 {
 	for( int  counter=0;counter<limit;counter++){
 		cout<<num[counter]<<endl;
	 }
 }
 