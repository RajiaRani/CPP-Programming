 #include<iostream>
using namespace std;
class Node{
	public:
		int key ;
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
			void appendnode(Node*n)
			{
				if(nodeexist(n->key)!=NULL)
				{
				cout<<" node already exist with this key value "<<n->key<<" Enter the different key value "<<endl;
			}
			else
			{
				if(head==NULL)
				{
					head=n;
					cout<<" node is appended "<<endl;
				}
				else
				{
					Node*ptr=head;
					while(ptr->next!=NULL)
					{
						ptr=ptr->next;
					}
					ptr->next=n;
					cout<<" node is appended "<<endl;
					
				}
			}
			}
			void prependnode(Node*n)
			{
					if(nodeexist(n->key)!=NULL)
				{
				cout<<" node already exist with this key value "<<n->key<<" Enter the different key value "<<endl;
			}
			else
			{
			if(head==NULL)
			{    head=n;
				cout<<" node is prepended "<<endl;
			}
			else
			{
				n->next=head;
				head=n;
				cout<<" node is prepended "<<endl;
			}
			}
			}
			void insertafterkey(int k, Node*n)
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
						cout<<" Node is already exists with this key value "<<n->key<<" Enter the different key value "<<endl;
					}
					else
					{
						n->next=ptr->next;
						ptr->next=n;
						cout<<" NODE INSERTED "<<endl;
					}
				}
			}
			void display()
			{
				if(head==NULL)
				{
					cout<<" Node is already empty "<<endl;
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
		int key1,data1,k1;
		int option;
		do
		{
				cout<<" enter the number which operation you want to perform "<<endl;
		        cout<<"1. AppendNode() "<<endl;
		        cout<<"2.PrependNode() "<<endl;
		        cout<<"3.InsertNode() "<<endl;
		        cout<<"4.  Display() " <<endl;
		        cout<<"5. clearscreen "<<endl;
		        
		        cin>>option;
		        Node*n1=new Node();
		        
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
		        		s.appendnode(n1);
		        		break;
		        	case 2:
		        			cout<<" Enter the key and data for the Prepend node "<<endl;
		        		cin>>key1;
		        		cin>>data1;
		        		n1->key=key1;
		        		n1->data=data1;
		        		s.prependnode(n1);
		        		break;
		        	case 3:
		        		cout<<" Insert Node operation/ Enter key of existing node after which you want to insert this new node "<<endl;
		        		cin>>k1;
		        		cout<<" Enter key and data of the new node "<<endl;
		        		cin>>key1;
		        		cin>>data1;
		        		n1->key=key1;
		        		n1->data=data1;
		        		s.insertafterkey(k1,n1);
						break;	
		        	
		        		
		        	case 4:
		        		s.display();
		        		break;
		        	case 5:
		        		system("cls");
		        		break;
		        	default:
		        		cout<<" enter the proper option ";
		        		
				}
		}
		while (option!=0);
		return 0;
		
	}
		
		
		
