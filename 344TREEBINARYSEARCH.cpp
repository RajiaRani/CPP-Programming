#include<iostream>
#define SPACE 5
using namespace std;
class TreeNode { public:
	     int value;
	     TreeNode*left;
	     TreeNode*right;
	TreeNode()
	{
		value=0;
		left=NULL;
		right=NULL;
		
	}
	TreeNode(int v)
     {value=v;
     left=NULL;
     right=NULL;
		 }	
};
class BinarySearchTree{
	public:
		TreeNode*root;
		BinarySearchTree()
		{
			root=NULL;
		}
bool isEmpty()
{
	if(root==NULL)
	{return true;}
	else
	{return false;}
}
void insertnode(TreeNode*new_node)
{
	if(root==NULL)
	{
		root=new_node;
		cout<<" node inserted as root "<<endl;
	}
	else
	{
		TreeNode*temp=root;
		while(temp!=NULL)
		if(temp->value==new_node->value)
		{
			cout<<" Node is already exists "<<endl<<"Enter the another value "<<endl;
			return ;
		}
		else if ((temp->value>new_node->value)&& (temp->left==NULL))
		{
			temp->left=new_node;
			cout<<"value inserted at the left side "<<endl;
			break;			
		}
		else if(temp->value>new_node->value)
		{
			temp=temp->left;
			
		}
		else if ((temp->value<new_node->value)&& (temp->right==NULL))
		{
			temp->right=new_node;
			cout<<"value inserted at the right side "<<endl;
			break;			
		}
		else
		{
			temp=temp->right;
		}
		}
		}
TreeNode* insertRecursive(TreeNode*r,TreeNode* new_node)
{
	if(r==NULL)
	{
		r=new_node;
		cout<<" Insertion done "<<endl;
		return r;
	}
	if(r->value>new_node->value)
	{
		r->left=insertRecursive(r->left, new_node);
	}
	else if(r->value<new_node->value)
	{
	 r->right=insertRecursive(r->right, new_node);
	}
	else
	{
		cout<<" No dublicate values present "<<endl;
		return r;
	}
	return r;
}
void printpreorder(TreeNode*r)
{
	if(r==NULL)
	return ;
	cout<<" Pre-Order is "<<r->value<<endl;
	printpreorder(r->left);
	printpreorder(r->right);
}
void printinorder(TreeNode*r)
{
	if(r==NULL)
	return;
	printinorder(r->left);
	cout<<" In-Order is "<<r->value<<endl;
	printinorder(r->right);
}
void printpostorder(TreeNode*r)
{
	if(r==NULL)
	return;
	printpostorder(r->left);
	printpostorder(r->right);
	cout<<"Post-Order is "<<r->value<<endl;
	
}
TreeNode*iterativesearch(TreeNode*r,int v)
{
	if(root==NULL)
	{
		return root;
	}
	else
	{
		TreeNode*temp=root;
		while(temp!=NULL)
		if(temp->value==v)
		{
			return temp;
			}
	else if	(temp->value>v)
	{
		temp=temp->left;
	}
	else{
		temp=temp->right;
	}
	return NULL;
	}
}
TreeNode*Recursivesearch(TreeNode*r, int val)
{
	if(r==NULL || r->value==val)
	{
		return r;
	}
	else if(r->value>val)
	{
		return Recursivesearch(r->left, val);
		
	}
	else
	{
	return Recursivesearch(r->right, val);	
	}
}
int height(TreeNode*r)
{
	if(r==NULL)
	return -1;
	else
	{
		int lheight=height(r->left);
		int rheight=height(r->right);
	
	if(rheight>lheight)
	{
		return (rheight+1);
	}
	else
	{
		return (lheight+1);
	}
}
}
void printGivenLevel(TreeNode*r, int level)
{
	if(r==NULL)
	return ;
	else if (level==0)
	{
		cout<<r->value<<"  "<<endl;
	}
	else 
	{
		printGivenLevel(r->left, level-1);
		printGivenLevel(r->right, level-1);
		
	}
}
void printGivenOrderBST(TreeNode*r)

{
	int h=height(r);
	for(int i=0; i<=h; i++)
	printGivenLevel(r, i);
}
TreeNode*deletenode(TreeNode*r, int v)
{
	if(r==NULL)
	{
		return NULL;
	}
	else if( r->value>v)
	{
		r->left= deletenode(r->left, v);
	}
	else if( r->value<v)
	{
		r->right=deletenode(r->right, v);
	}
	else
	{
		if(r->left==NULL)
		{
		TreeNode*temp=r->right;
		delete r;
		return temp;
	 }
	 else if(r->right==NULL)
	 {
	 	TreeNode*temp=r->left;
	 	delete r;
	 	return temp;
	 }
	 else
	 {
	 	TreeNode*temp=MiniValueNode(r->right);
	 	r->value=temp->value;
	 	r->right=deletenode(r->right, temp->value);
	 }
	}
	return r;
}
TreeNode*MiniValueNode(TreeNode*node)
{
	TreeNode*current=node;
	while(current->left!=NULL)
	{
		current=current->left;
	}
	return current;
}

void print2D(TreeNode*r,int space)
{
	if(r==NULL)
		return;
	
	space=space+SPACE;
	print2D(r->right,space);
	cout<<" ";
	for(int i=SPACE; i<space;i++)
	cout<<r->value<<" ";
	print2D(r->left,space);
}
};
int main()
{
	BinarySearchTree b;
	int option,val; 
	do
	{
	cout<<" Enter the option number which you wan to perform the operation / enter 0 to exist "<<endl;
	cout<<"1.InsertNode() "<<endl;
	cout<<"2.SearchNode() "<<endl;
	cout<<"3.DeleteNode() "<<endl;
	cout<<"4.PrintNode() "<<endl;
	cout<<"5.Height of the Tree "<<endl;
	cout<<"6.ClearScreen "<<endl;
	cin>>option;
	TreeNode* new_node= new TreeNode();
	
	switch(option)
	{
		case 0:
			break;
		case 1:
			cout<<" INSERTION "<<endl;
			cout<<" Enter the value for the insertion "<<endl;
			cin>>val;
			new_node->value=val;
			b.root=b.insertRecursive(b.root, new_node);
			break;
			
		case 2:
			cout<<" SEARCH "<<endl;
			cout<<" Search value of the tree node to search BST  "<<endl;
			cin>>val;
			new_node=b.iterativesearch(b.root, val);
			if(new_node!=NULL)
			{
				cout<<" Value found "<<endl;
			}
			else
			{
				cout<<" Value not found "<<endl;
			}
			break;
		case 3:
			cout<<" DELECTION  "<<endl;
			cout<<" Enter value of tree node to be delete "<<endl;
			cin>>val;
			new_node=b.iterativesearch(b.root, val);
			if(new_node!=NULL)
			{
				b.deletenode(b.root, val);
				cout<<" Value deeted  "<<endl;
			}
			else
			{
			cout<<" Value not found "<<endl;	
			}
			break;
	   case 4:
	   	cout<<" PRINT2D "<<endl;
	   	b.print2D(b.root,5);
	   	//cout<<endl;
	   	//cout<<" print level order BTS "<<endl;
	   //	b.printGivenOrderBST(b.root);
	   	//cout<<endl;
	   	//cout<<"PreOrdr"<<endl;
	   	//b.printpreorder(b.root);
	   	//cout<<"inorder"<<endl;
	   	//b.printinorder(b.root);
	   	//cout<<"postorder"<<endl;
	   	//b.printpostorder(b.root);
	   	break;
	case 5:
		cout<<" TREE HEIGHT "<<endl;
		cout<<" Height "<<b.height(b.root)<<endl;
		break;
	case 6:
		system("cls");
		break;
	default:
		cout<<" enter the proper option number "<<endl;
			
			
	}
	}
	while(option!=0);
	return 0;
	
}