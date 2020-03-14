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


node* findmin(node* root)
{
	while(root->left != NULL)
	{	root = root->left;}
	return root;	
}

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

node* deletenode(node* root,int value)
{
  if(root==NULL)
 	{
	 return root;
	}
  else if(value < root->data)
 	{
	 root->left = deletenode(root->left,value);
	}
 else if(value > root->data)
 	{
	 root->right = deletenode(root->right,value);
	}
 else
 	{
	 if(root->left==NULL && root->right==NULL)  //if leaf node
	 	{
		 delete root;
		 root=NULL;
		}
	 else if(root->left==NULL)                  //if single parent
	 		{
			 node* temp;
			 temp=root;       //cant directly delete root we gotta make a link first
			 root=root->right;
			 delete temp;
			}
	 else if(root->right==NULL)        //single parent either left is null or rigth so check both cases                 
	 		{
			 node* temp;
			 temp=root;     
			 root=root->left;
			 delete temp;
			}
	 else                                 //parent of 2 children
	    {
		 node* temp;
		 temp=findmin(root->right);
		 root->data = temp->data;    //copy max from left on place of the root via temp
		 root->right = deletenode(root->right,temp->data);
		}
	}
	return root;
}

/*void del()
{
 int x;
 //node* r,newroot;
 //node* returnedroot;
 cout<<"enter the number to be deleted : ";
 cin>>x;
 //returnedroot=root
 root=deletenode(root,x); //if you dont make it root=..  then it will by default choose root as your global NULL wala root
 //delete root;
}*/


int main()
{
 while(1)
 	{ 
		int ch;
		cout<<"\n1.insert \n2.delete \n3.traverse(pre-order) \n4.search \n5.exit \n";
		cin>>ch;
    switch(ch)
    	{
		    case 1:
				insert();
				break;
        	case 2:
				int value;
				cout<<"enter the number to be deleted : ";
				cin>>value;
				root=deletenode(root,value);
				break;
			case 3:	
				preorder(root);
				break;
	    	case 4:
					cout<<"enter the element to be searched for : ";
					int n;
					cin>>n;
					if(search(root,n)== true)
						cout<<"element is found \n";
					else 
						cout<<"element is not found \n";
				break;
			case 5:
				return 0;
    	}
	}
}
