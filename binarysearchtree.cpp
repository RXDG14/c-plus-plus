#include<iostream>
using namespace std;

int n;

class node
{
 public:
 	int data;
	node* left;
	node* right;
}*root=NULL;


node* createnode(int value)
{
 node* newnode=new node();   //of class type node
 //cout<<"enter the data : ";
 newnode->data=value;
 newnode->left=NULL;
 newnode->right=NULL;
 return newnode;
}

node* insertnode(node* root,int value)
{
// node* newnode=createnode();  if you put this here then it will createnode on every recursive call and program wont work
 if(root==NULL)
 	{
	 root=createnode(value);
	}
 else if(value <= root->data)
 		{
		 root->left = insertnode(root->left,value);
		}
 else
 	{
	 root->right = insertnode(root->right,value);
	}
	//return root;
}



void insert()
{
 int a;
 //node* r,newroot;
 //node* returnedroot;
 cout<<"insert data: ";
 cin>>a;
 //returnedroot=root;
 root=insertnode(root,a); //if you dont make it root=..  then it will by default choose root as your global NULL wala root
}



int preorder(node* node) 
{ 
    if (node == NULL) 
        return(1); 
    cout << node->data << " "; 
    preorder(node->left);  
    preorder(node->right); 
} 

 
bool search(node* node,int n)
{
    if (node == NULL) 
       {
	    return false; 
       }
	else if(node->data==n)
			{
			 return true;
			}
	//cout << node->data << " "; 
    else if(n <= node->data)
			return search(node->left,n);  
    else if(n > node->data)
			return search(node->right,n); 
} 



int main()
{
 while(1)
 	{ 
		int ch;
		cout<<"\n1.insert \n2.traverse(pre-order) \n3.search \n4.exit \n";
		cin>>ch;
    switch(ch)
    	{
		    case 1:
				insert();
				break;
        	case 2:	
				preorder(root);
				break;
	    	case 3:
					cout<<"enter the element to be searched for : ";
					int n;
					cin>>n;
					if(search(root,n)== true)
						cout<<"element is found \n";
					else 
						cout<<"element is not found \n";
				break;
			case 4:
				return 0;
    	}
	}
}
