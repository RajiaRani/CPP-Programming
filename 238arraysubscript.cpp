#include<iostream>
using namespace std;
class Standard {private:
	int students[5];
	public:
		Standard(int std1, int std2, int std3, int std4, int std5){
			students[0]=std1;
			students[1]=std2;
			students[2]=std3;
			students[3]=std4;
			students[4]=std5;
				}
				int operator[](int number)
				{return students[number];
				}
};
int main()
{
	Standard raj(23,78,89,90,56);
	cout<<raj[3]<<endl;
	cout<<raj[0]<<endl;
	return 0;
}