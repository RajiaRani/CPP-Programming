#include<iostream>
using namespace std;
class Node{
	public:
		int key;
		int data;
		Node* next;
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
class linkedlist{
	public:
		Node*head;
		linkedlist()
		{
			head=NULL;
		}
		linkedlist(Node*n)
		{
			head=n;
		}
		Node*nodeexists(int k)
		{
			Node* temp=NULL;
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
			{
				cout<<"Sorry, Node already exists with this key value "<<n->key<<" Enter the different key value "<<endl;
			}
			else
			{
				if(head==NULL)
				{
					head=n;
					cout<<" Node is appended "<<endl;
					
				}
				else
				{
					Node*ptr=head;
					while(ptr->next!=NULL)
					{
						ptr=ptr->next;
					}
					ptr->next=n;
	                cout<<" Node is Appended "<<endl;
					
				}
			}
		}
		void prependnode(Node*n)
		{
			if(nodeexists(n->key)!=NULL)
			{
			cout<<"Sorry, Node already exists with this key value "<<n->key<<" Enter the different key value "<<endl;	
			}
			else
			{
				n->next=head;
				head=n;
				cout<<" Node is Prepended "<<endl;
			}
		}
		void Display()
		{
			if(head==NULL)
			{
				cout<<" node is already empty "<<endl;
			
			}
			else
			{
				Node*temp=head;
				while(temp!=NULL)
				{
					cout<<"( "<<temp->key<<","<<temp->data<<")-->";
					temp=temp->next;
					
				}
			}
		}
		};
		int main()
		{
			linkedlist l;
			int option;
			int key1, data1,k1;
			do
			{
				cout<<" enter the number which operation you want to perform "<<endl;
		        cout<<"1. AppendNode() "<<endl;
		        cout<<"2.PrependNode() "<<endl;
		        cout<<"3.  Display() " <<endl;
		        cout<<"4. clearscreen "<<endl;
		        
		        cin>>option;
		        Node*n1= new Node();
		        switch(option)
		        {
		        	case 0:
		        		break;
		        	case 1:
		        		cout<<" Enter the key and data for the Append node "<<endl;
		        		cin>>key1;
		        		cin>>data1;
		        		n1->key=key1;
		        		n1->data=data1;
		        		l.appendnode(n1);
		        		break;
		        	case 2:
		        			cout<<" Enter the key and data for the Prepend node "<<endl;
		        		cin>>key1;
		        		cin>>data1;
		        		n1->key=key1;
		        		n1->data=data1;
		        		l.prependnode(n1);
		        		break;
		        	case 3:
		        		l.Display();
		        		break;
		        	case 4:
		        		system("cls");
		        		break;
		        	default:
		        		cout<<" enter the proper option ";
		        		
				}
	
			}
			while(option!=0);
			return 0;
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		