#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		int key;
		Node*next;
		Node()
		{
			data=0;
			key=0;
			next=NULL;
		}
		Node(int k, int d)
		{
			data=d;
			key=k;
		}
};
class SinglyLinkedList{
	public:
		Node*head;
		SinglyLinkedList()
		{
			head=NULL;
		}
		SinglyLinkedList(Node*n)
		{
			head=n;
		}
		
		Node *nodeExists(int k)
		{
			Node* temp= NULL;
			Node*ptr=head;
			while(ptr!=NULL)
			{
				if(ptr->key==k)
				{
					ptr=temp;
				}
				ptr=ptr->next;
			}
		return temp;
		}
		void Appendnode(Node*n)
		{
			if(nodeExists(n->key)!=NULL)
			{
				cout<<" node already exist with this key value "<<n->key<<" Enter the different key value "<<endl;
			}
			else
			{
				if(head==NULL)
				{
					head=n;
					cout<<" node is appended "<<endl;
					return;
				}
			
			
			else
			{
				Node*ptr=head;
				while(ptr->next!=NULL)
				{
					ptr=ptr->next;
				}
				ptr->next=n;
				cout<<" node appended "<<endl;
			}
		}
		
		}
		void Display()
		{
			if(head==NULL)
			{
				cout<<" No node is singly linked list "<<endl;
			}
			else
			{
				Node*temp=head;
				while(temp!=NULL)
				{
					cout<<"( "<<temp->key<<" , "<<temp->data<<") --> ";
					temp=temp->next;
				}
		}
	}
};
int main()
{
	SinglyLinkedList s;
	int key1, data1, k1;
	int option;
	do
	{
		cout<<" enter the number which operation you want to perform "<<endl;
		cout<<"1. AppendNode() "<<endl;
		cout<<"2.  Display() " <<endl;
		cout<<"3. clearscreen "<<endl;
	
	cin>>option;
	Node *n1= new Node();
	switch(option)
	{
	case 0:
	break;
	
	case 1:
	cout<<" enter the key and data for append the node "<<endl;
	
	cin>>key1;
	cin>>data1;
	n1->key=key1;
	n1->data=data1;

	s.Appendnode(n1);
	break;
	
	case 2:
	s.Display();
	break;
	
	case 3:
		system ("cls");
		break;
	}
}
	while(option!=0);
	return 0; 
	
	
}















