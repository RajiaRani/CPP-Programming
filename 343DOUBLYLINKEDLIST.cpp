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
			{if(ptr->key==k)
			{
				ptr=temp;
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
cout<<"Node Appended "<<endl;
}
else{
	Node*ptr=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=n;
	n->prev=ptr;
 cout<<"Node Appended "<<endl;	
}
}
}
void prependnode(Node*n)
{
	if(nodeexists(n->key)!=NULL)
	{cout<<" Node is already exist with this key value "<<n->key<<" Enter the different key value "<<endl;}
	else
	{
		if(head==NULL)
{head=n;
cout<<"Node Prepended "<<endl;
	}
	else
	{
		n->next=head;
		head->prev=n;
		head=n;
		cout<<"Node Prepended "<<endl;
	}
}
}
void insertnodeafterkey(int k, Node*n)
{
	Node*ptr=nodeexists(k);
	if(ptr==NULL)
	{cout<<"NO NODE EXISTS "<<k<<endl;}
	else
	{
	if(nodeexists(n->key)!=NULL)
	{cout<<" Node is already exist with this key value "<<n->key<<" Enter the different key value "<<endl;}
	else
	{	Node*nextNode=ptr->next;
		if(nextNode==NULL)
		{   ptr->next=n;
			n->prev=ptr;
			cout<<" Node is inserted at the end "<<k<<endl;
			}
			else
			{   n->next=nextNode;
				nextNode->prev=n;
				ptr->next=n;
				n->prev=ptr;
				cout<<" Node is inserted in between "<<k<<endl;
			}
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
	int key1,data1,k1;
	int option;
	do
	{
	cout<<" enter the number which operation you want to perform "<<endl;
	cout<<"1.AppendNode() "<<endl;
	cout<<"2.PrependNode() "<<endl;
	cout<<"3.InsertNodeAfterKey()"<<endl;
	cout<<"4.Display() " <<endl;
	cout<<"5.clearscreen "<<endl;
	
	cin>>option;
	Node* n1 = new Node();
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
		
		case 3:
			cout<<"InsertNode after key "<<endl<<" enter the key value ";
			cin>>k1;
			cout<<" enter the key and  data for the insertion "<<endl;
		    cin>>key1;
		cin>>data1;
	    n1->key=key1;
		n1->data=data1;
		d.insertnodeafterkey(k1,n1);
		break;
		
		case  4:
			d.display();
			break;
		case 5:
			system("cls");
			break;
		default:
			cout<<" Please enter the proper option number "<<endl;
				
	}
	}
	while(option!=0);
	return 0;
		}		