#include<iostream>
using namespace std;
class Node{
	public:
		int key;
		int data;
		Node*next;
		Node*prev;
	Node()
	{
		key=0;
		data=0;
		next=NULL;
		prev=NULL;
	}
	Node(int k, int d)
	{
		key=k;
		data=d;
	}
};
class Doublylinkedlist{
	public:
		Node*head;
		Doublylinkedlist()
		{
			head=NULL;
		}
		Doublylinkedlist(Node*n)
		{
			head=n;
		}

Node*nodeexists(int k)
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
void appendnode(Node*n)
{
	if(nodeexists(n->key)!=NULL)
	{cout<<" Node is already exist with this key value "<<n->key<<" Enter the different key value "<<endl;}
	else
	{
		if(head==NULL)
		{head=n;
		cout<<" Node appended "<<endl;
		}
		else
		{Node*ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=n;
		n->prev=ptr;
		cout<<" Node appended "<<endl;
		}
	}
}

void prependnode(Node*n)
{	if(nodeexists(n->key)!=NULL)
	{cout<<" Node is already exist with this key value "<<n->key<<" Enter the different key value "<<endl;}
	else
	{if(head==NULL)
	{
		head=n;
		cout<<" Node prepended "<<endl;
	}
	else
	{
		n->next=head;
		head->prev=n;
		head=n;
		cout<<" Node prepended "<<endl;
	}
	}
}

void display()
{
	if(head==NULL)
	{cout<<" NO Node exists "<<endl;
	}
	else
	{
		Node*temp=head;
		while(temp!=NULL)
		{
			cout<<"("<<temp->key<<","<<temp->data<<") <->";
			temp=temp->next;
		}
	}
}		
		};
		
int main()
{
	Doublylinkedlist d;
	int key1,data1;
	int option;
	do
	{
	cout<<" enter the number which operation you want to perform "<<endl;
	cout<<"1.AppendNode() "<<endl;
	cout<<"2.PrependNode() "<<endl;
	cout<<"3.Display() " <<endl;
	cout<<"4.clearscreen "<<endl;
	
	cin>>option;
	Node*n1= new Node();
	switch (option)
	{
		case 0:
			break;
		case 1:
		cout<<" Enter the key and data for the Append node "<<endl;
		cin>>key1;
		cin>>data1;
		n1->key=key1;
		n1->data=data1;
		d.appendnode(n1);
		     break;
		
		case 2:
		cout<<" Enter the key and data for the prepend  node "<<endl;
		cin>>key1;
		cin>>data1;
		n1->key=key1;
		n1->data=data1;
		d.prependnode(n1);
		break;
		
		case  3:
			d.display();
			break;
		case 4:
			system("cls");
			break;
		default:
			cout<<" Please enter the proper option number "<<endl;
				
	}
	}
	while(option!=0);
	return 0;
		}		