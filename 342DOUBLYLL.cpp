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
class doublylinkedlist{
	public:
		Node*head;
		doublylinkedlist()
		{
			head=NULL;
		}
		doublylinkedlist(Node*n)
		{
			head=n;
		}
		
Node*nodeexist(int k)
{
	Node*temp=NULL;
	Node*ptr=head;
	while (ptr!=NULL)
	{
		if(ptr->next!=NULL)
		{
			temp=ptr;
		}
		ptr=ptr->next;
	}
	return temp;
}	

void appendnode(Node*n)
{
	if(head==NULL)
	{
		head=n;
		cout<<" node appended "<<endl;
	}
	else
	{
		Node*ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=n;
		n->prev=ptr;
		
		cout<<" Node Appended "<<endl;
	}
	}	
	
	void display()
	{
		if (head==NULL)
		{
			cout<<" Node is Empty "<<endl;
		}
		else
		{
			Node*temp=head;
			while(temp!=NULL)
			{
				cout<<"("<<temp->key<<","<<temp->data<<") ->";
				temp=temp->next;
			}
		}
	}
		
	};
	int main()
		{
			doublylinkedlist l;
			int option;
			int key1, data1,k1;
			do
			{
				cout<<" enter the number which operation you want to perform "<<endl;
		        cout<<"1. AppendNode() "<<endl;
		        cout<<"2.  Display() " <<endl;
		        cout<<"3. clearscreen "<<endl;
		        
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
		        		l.display();
		        		break;
		        	case 3:
		        		system("cls");
		        		break;
		        	default:
		        		cout<<" enter the proper option ";
		        		
				}
	
			}
			while(option!=0);
			return 0;
		}
		
		








































