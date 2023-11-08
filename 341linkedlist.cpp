#include<iostream>
using namespace std;
class Node{
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
	Node*nodeexist(int k)
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
	// NODE ADDED AT THE END 
	void appendnode(Node*n)
	{
		if(nodeexist(n->key)!=NULL)
		{
			cout<<" node already exist "<<n->key<<" please enter different key value "<<endl;
		}
		else
		{
			if(head==NULL)
			{
				head=n;
				cout<<"NODE APPENDED "<<endl;
			}
			else
			{
				Node*ptr=head;
				while(ptr->next!=NULL)
				{
					ptr=ptr->next;
				}
				ptr->next=n;
				cout<<" Node appended "<<endl;
			}
		}
	}
	//NODE ADDED AT THE STARTING 
	void prependnode(Node*n)
	{
		if(nodeexist(n->key)!=NULL)
		{cout<<" node already exist "<<n->key<<" please enter different key value "<<endl;}
		else{
		     if(head==NULL)
			{   head=n;
				cout<<" node is prepended "<<endl;}
		else
		{
		
			n->next=head;
			head=n;
			cout<<" Node Prepended "<<endl;}
		}
	}
	
	
	
	//NODE ADDED IN BETWEEN 
	
	void insertnodeafterkey(int k, Node*n)
	{
		Node*ptr=nodeexist(k);
		if(ptr==NULL)
		{
			cout<<" No node exists with this key value "<<k<<endl;
		}
		else
		{
				if(nodeexist(n->key)!=NULL)
		{
			cout<<" node already exist "<<n->key<<" please enter different key value "<<endl;
		}
		else
		{
			n->next=ptr->next;
			ptr->next=n;
			cout<<" Node is Inserted "<<endl;
		}
			
		}
	}
	// DELETE THE NODE
	
	void deletenodebykey(int k)
	{
		if (head==NULL)
		{
			cout<<" NO node is present . Sorry we cant delete anything now "<<k<<endl;
		}
		else
		{
			if (head->key==k)
			{
				head=head->next;
			
			cout<<" Node is UNLINKED by the key value "<<k<<endl;
		}
		
		else
		{
			Node*temp=NULL;
			Node*prevptr=head;
			Node*currptr=head->next;
			while(currptr!=NULL)
			{
				if(currptr->key==k)
				{
					temp=currptr;
					currptr=NULL;
				}
				else
				{
					prevptr=prevptr->next;
					currptr=currptr->next;
				}
			}
			if(temp!=NULL)
			{
				prevptr->next=temp->next;
				cout<<" Node unlinked by the key value "<<k<<endl;
			}
			else
			{
				cout<<" Node doest exists with enter key value "<<k<<endl;
			}
		}
	}
}

void updatenodebykey(int k, int d)
{
	Node*ptr=nodeexist(k);
	if(ptr!=NULL)
	{
		ptr->data=d;
		cout<<"Node updated successfully "<<endl;
	}
	else
	{
		cout<<" node doesnt exists with this key value "<<k<<endl;
	}
}
	void display()
	{
		if(head==NULL)
		{
			cout<<" node is empty "<<endl;
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
		SinglyLinkedList s;
		int key1, data1, k1;
		int option;
		do
		{
			cout<<" Enter the operation which you want to perform . Select the number from 0 to exists "<<endl;
			cout<<"1. AppendNode() "<<endl;
			cout<<"2. PrependNode() "<<endl;
			cout<<"3. InsertNode() "<<endl;
			cout<<"4. DeleteNode() "<<endl;
			cout<<"5. UpdateNode() "<<endl;
			cout<<"6. Display() "<<endl;
			cout<<"7. ClearScreen "<<endl;
			
			cin>>option;
			Node*n1= new Node();
			switch(option)
			{
				case 0:
					break;
				case 1:
				cout<<" Append Node Operation "<<endl<<" Enter the key and data for the append node "<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				s.appendnode(n1);
				break;
			case 2:
					cout<<" Prepend Node Operation "<<endl<<" Enter the key and data for the prepend node "<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				s.prependnode(n1);
				break;
			case 3:
				cout<<" Insert Node After Key "<<endl<<" Enter the key value where you want to insert the node "<<endl;
				cin>>k1;
				cout<<" Enter the key and data for the insertion "<<endl;
					cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				s.insertnodeafterkey(k1,n1);
				break;
			case 4:
				cout<<" Delete the node with key value "<<endl<<" Enter the key value"<<endl;
		         cin>>k1;
		         s.deletenodebykey(k1);
		         break;
		    case 5:
		    	cout<<" Update the node "<<endl<<" Enter the key and data "<<endl;
		    	cin>>k1;
		    	cin>>data1;
		    	s.updatenodebykey(k1,data1);
		    	break;
		    case 6:
		    	s.display();
		    	break;
		    case 7:
		    	system("cls");
		    	break;
		    default:
		    	cout<<" Please , enter the proper option number "<<endl;
		         
		    }
		}
		while(option!=0);
		return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	