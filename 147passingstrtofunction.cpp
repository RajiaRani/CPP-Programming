 #include<iostream>
 using namespace std;
 struct input{ int std;int age; char sex; float percentage;
 char result;
 };
 void display(input s);
 void screen(input *s);
 int main()
 {
 	input rajia={10+2, 18, 'f', 82.45, 'P'};
 	display(rajia);
 	screen(&rajia);
 	return 0;
 }
 void display(input s)
 { cout<<s.std<<endl<<s.age<<endl<<s.sex<<endl<<s.percentage<<endl<<s.result<<endl;
 
 }
 void screen(input *s)
 { cout<<s->std<<endl<<s->age<<endl<<s->sex<<endl<<s->percentage<<endl<<s->result<<endl;
 }
 