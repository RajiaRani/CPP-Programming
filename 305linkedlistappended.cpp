#include<iostream>
using namespace std;
class Node {
    public:
	int key;
	int data;
	Node*next;
	Node()
	{
	key=0;
	data=0;
	next=NULL;
	}
	Node(int k, int d)
	{
	key=k;
	data=d;
	}
};
class singlylinkedlist
{
	private:
		Node* head;
		public:
		singlylinkedlist()
		{
			head=NULL;
		}
		singlylinkedlist(Node*n)
		{
			head=n;
		}
	 
	 Node* nodeExists(int k)
	 {
	 	Node*temp=NULL;
	 	Node*ptr=head;
	 	while(ptr!=NULL)
	 	{
	 		if(ptr->key==k)
	 		{
	 			temp=ptr;
			 }
			 ptr=ptr->next;
		 }
		 return temp;
	 	
	 }

	
	
	void Appendnode(Node*n)
{
	if(nodeExists(n->key)!=NULL)
	{
		cout<<" node already exists with this key value "<<n->key << "Please enter different key value "<<endl;
	}
	else
	{
	if(head==NULL)
{
 head=n;
 cout<<"node append "<<endl;
 
}
else 
{
Node*ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=n;
cout<<"node appended"<<endl;
return ;

}
}
}
void Prependnode(Node*n)
{
		if(nodeExists(n->key)!=NULL)
	{
		cout<<" node already exists with this key value "<<n->key << "Please enter different key value "<<endl;
	}
	else
	{
		n->next=head;
		n=head;
		cout<<" node prepended "<<endl;
	}
	
}

 void display()
 {
 	if(head==NULL)
 	{
 		cout<<" no node exists "<<endl;
	 }
	 else
	 {
	 	cout<<"singly linked list values " ;
	 	
	 
	 Node*temp=head;
	 while(temp!=NULL)
	 {
		 cout<<"( "<<temp->key<<","<<temp->data<<") --> "<<endl;
	 	temp=temp->next;
	 	
	 }
	 
}
 }
};

int main()
{ 
singlylinkedlist s;
int option;
int key1,data1;
do
{

cout<<" what operation do you want to perform ? select option number .enter 0 to exist "<<endl;
cout<<"1. appendnode()"<<endl;
cout<<"2. prepandendnode()"<<endl;
cout<<"3. display()"<<endl;
cout<<"4. clear screen"<<endl;
cin >>option;
Node* n1=new Node();

switch(option)

{
	case 0:
		break;
		case1:
			
cout<<"  APPEND NODE OPERATION / Enter the key and data for the append the node  "<<key1<<endl<<data1<<endl;
cin>>key1;
cin>>data1;
n1->key=key1;
n1->data=data1;
s.Appendnode(n1);
break;

case 2:
	cout<<"  PREPEND NODE OPERATION / Enter the key and data for the append the node  "<<key1<<endl<<data1<<endl;
cin>>key1;
cin>>data1;
n1->key=key1;
n1->data=data1;
s.Prependnode(n1);
break;
	
 
 case 3:
	s.display();
	break;

case 4:
	system(" cls ");
	break;
	
	default:
		cout<<" enter the proper option ";

	}
}
while(option!=0);

return 0;
	
}
	
	
	
	
	
	
	
	
