 #include<iostream>
 using namespace std;
  struct student { int rollno; char sex;
  };
  int main()
  {
  	student rajia;
  	student *rajiaptr;
  	rajiaptr=&rajia;
  	rajia.rollno=2312;
  	rajiaptr->sex='f';
  	cout<<rajiaptr->rollno<<endl;
  	cout<<rajia.sex<<endl;
  	return 0;
  }