#include<iostream>
using namespace std;

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
        return(333333); 
    cout << node->data << " "; 
    preorder(node->left);  
    preorder(node->right); 
} 



int main()
{
 while(1)
 	{ 
		int ch;
		cout<<"\n1.insert \n2.traverse(pre-order) \n3.exit";
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
				return 0;
    	}
	}
}
