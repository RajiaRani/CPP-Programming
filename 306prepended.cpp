#include<iostream>
using namespace std;
class Node{ public:
	int key;
	int data;
	Node*next;
	Node() { key=0;
	data=0;
	next=NULL;
	}
	Node(int k, int d )
	{ key=k;
	data=d;
	}
};
	class SinglyLinkedList{ public:
		Node*head;
		SinglyLinkedList(){head=NULL;
		}
		SinglyLinkedList(Node *n)
		{head=n;
		}
		Node* nodeExists(int k)
		{
			Node *temp=NULL;
			Node *ptr=head;
			
			while(ptr!=NULL)
			{if(ptr->key==k)
			{temp=ptr;
			}
			ptr=ptr->next;
			}
			return temp;
		}
		
		void appendNode(Node *n)
		{
			if(nodeExists(n->key)!=NULL)
			{cout<<"node already exists with key value "<<n->key<<"apend another node with different key value "<<endl;
			
			}
			else
			{if(head==NULL)
			{head=n;
			cout<<"node append "<<endl;
			}
			else
			{
				Node *ptr=head;
				while(ptr->next!=NULL)
				{ptr=ptr->next;
				}
				ptr->next=n;
				cout<<"appended node "<<endl;
			}
			}
		}
		void prependNode(Node*n)
		{if(nodeExists(n->key)!=NULL)
		{cout<<"node already exist with the key value "<<n->key<<"prepend another key value "<<endl;
		}
		else{
			n->next=head;
			head=n;
			cout<<"node prepended value "<<endl;
		}
		}
	void printlist()
	{
		if(head==NULL)
		{cout<<"no node is singly linked list ";
		}
		else
		{cout<<"singly linked list values "<<endl;
		 Node*temp=head;
		 while(temp!=NULL)
		 {cout<<"( "<<temp->key<<","<<temp->data<<" )-->";
		 temp=temp->next;
		 }
		}
	 } 

	};
	int main()
	{
		SinglyLinkedList s;
		int option;
		int key1,k1,data1;
		do
		{
			cout<<"what operation do you want to perform? select number enter 0 to exist "<<endl;
			
		cout<<"1. Append Node() "<<endl;
		cout<<"2. Prepend Node() "<<endl;
		cout<<"3. Print() "<<endl;
		cout<<"4. clear screen() "<<endl;
		
		cin>>option;
		Node*n1=new Node();
		switch(option)
		{
			case 0:
				break;
				case 1:
					cout<<"append node operation \ enter key and data of the node to be appended "<<endl;
		
		cin>>key1;
		cin>>data1;
		n1->key=key1;
		n1->data=data1;
		s.appendNode(n1);
		 break;
		 
		 case 2:
		 	cout<<"prepend node operation\ enter the key and data of the node to be prepended "<<endl;
		 	cin>>key1;
		 	cin>>data1;
		 	n1->key=key1;
		 	n1->data=data1;
		 	s.prependNode(n1);
		 	break; 
		 	
		 	case 3:
		 		s.printlist();
		 		break;
		 		
		 	case 4:
			 system("cls");
			 break;	
		 		
		 	default:
		 	cout<<"enter proper option number "<<endl;
		 }
	}
	while(option!=0);
	return 0;

	}
	
