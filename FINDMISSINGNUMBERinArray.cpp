 #include<iostream>
 using namespace std;
 int getmissingnumber(int a[],int x)
 {
 	int n, sum;
 	sum=(x+1)*(x+2)/2;
 	for(int i=0;i<x;i++)
 	
 		sum=sum-a[i];
 		 return sum;
 	
 }
 int main()
 {
 	int a[]={1,2,3,4,6};
 	int n= sizeof(a)/sizeof(a[0]);
 	int miss= getmissingnumber(a,n);
 	cout<<"The Missing Number is -> "<<miss<<endl;
 	return 0;
 }