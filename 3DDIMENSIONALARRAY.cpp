 #include<iostream>
 using namespace std;
 int main()
 {
 	int a[3][4][2]= { {0,1,2,3},{4,5,6,7}},{{8,9,10,11},{12,13,14,15}},{{16,17,18,19},{20,21,22,23}};
 	for(int i=0;i<3;i++){
 		for(int j=0;j<4;j++)
 		{
 			for(int k=0;k<2;k++){
 				cout<<"element of arr ["<<i<<"] ["<<j<<"] ["<<k<<"] :";
 				cout<<arr[i][j][k]<<endl;
			 }
		 }
	 }
	 return 0;
 }