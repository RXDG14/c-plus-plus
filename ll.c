#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node* next;   //pointer of type structure
}*start=NULL;

typedef struct node node;

node* createnode()
{
 node* newnode;//making the structure of the newnode
 newnode=(node*)malloc(sizeof(node));//mem allocation to new node
 newnode->next=NULL;
 printf("enter the data : ");
 scanf("%d",&newnode->data);
 return newnode;
}
void createlist()
{
	node* newnode,*temp;
	int n;
	printf("Enter the number of nodes ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		newnode=createnode();
		if(start==NULL)
		{
			start=newnode;//make the start point to the newnode as start is pointing to null
		}
		else
		{
			temp=start;
			while(temp->next!=NULL)
			//if start already points to a node then we traverse till the last element then we make the connection between the newnode and the last element// 
			{
				temp=temp->next;//temp++ in short
			}
			temp->next=newnode;//if nothing above fits then ur last node is where the newnode goes to
		}
	}
}

//*********************INSERTION AT THE FRONT******************************//
void insf()
{
 node *newnode;//(node* newnode) is same as (node *newnode) as both resembles same meaning as both are the goddamn pointers 
 newnode=createnode();
 if(start==NULL)
  {
 	start=newnode;
  }
 else
  {
   newnode->next=start;//as in the createnode function the newnodes next is null so u make it point to somewhere here rather than just doing the  newnode=start
   start=newnode;
  }
}
//*****************INSERT AT THE END******************//
void insend()
{
 node *temp,*newnode;
 printf("enter at end: ");
 newnode=createnode();
 temp=start;
 while(temp->next!=NULL)//NULL se ek pehle tak
 	  {
 	   temp=temp->next;//keep incrementing until 1 less than null
 	  }	
 	  temp->next=newnode;//once found place u put newnode there
}

//*****************INSERT AT MIDDLE*******************//
void inmid()
{
 node *newnode,*temp;
 int count=1,n;//entering the position n
 newnode=createnode();
 printf("at which position do u want to enter the data : ");
 scanf("%d",&n);
 	temp=start;
	 while(temp!=NULL && count<n-1)
	 	  {
	 	   count++;//increment count until position found
		   temp=temp->next;//increment temp 
	  	  }
	  	  if(temp==NULL)
	  	  {
	  	   printf("error ");
	  	  }
	  	  else
	  	  {
	  	  	newnode->next=temp->next;
  	  		temp->next=newnode;
		  }
}

//*****************************DELETION AT END***********************//
void delend()
{
 node *temp,*temp1;
 int count=1,n;
 temp=start;
 while(temp->next!=NULL)
 	  {
 	   temp1=temp;//this to make other temp we made to follow the original temp
 	   temp=temp->next;//increment
	  }
	  if(temp->next==NULL)
 	     {
 	      temp1->next=NULL;
 	      free(temp);
 	     }
}

//******************************DELETION FROM FRONT**************************//
void delfront()
{
 node *temp;
 temp=start;//temp points to start ka next
 start=start->next;//u make the start ka next increment but this doesnt affect the temp=temp remains same position
 free(temp);//temp is freed and u now have a new start
}

//******************************DELETION IN MIDDLE***************************//
void delmid()
{
 node * temp,*temp1;
 int count=1,n;
 printf("enter the position at which you want to delete: ");
 scanf("%d",&n);
 temp=start;
	 while(temp!=NULL && count<n)
	 	  {
	 	   count++;//increment count until position found
		   temp1=temp;
		   temp=temp->next;//increment temp 
	  	  }
	  	  if(temp==NULL)
	  	  	{
	  	  	 printf("error");
	  	  	}
	  	  	else
	  	  	{
	  	  		temp1->next=temp->next;//temp at given pos.(to be deleted) temp1 points to temp ka next(nexxt position of to be deleted element) then u free the temp leaving temp1 pointing to its next
	  	  		free(temp);
	  	  	}
}


//*******************TRAVERSE****************************//
void traverse()
{
 node* temp;
 temp=start;
 while(temp!=NULL)
  {
	printf("%d",temp->data);		
	temp=temp->next;//this literally means temp++ in linkedlist language
  }
}


int main()
{
 int ch,x=1;
 while(x==1)
 	  {
 	  printf("\n enter your choice : \n 1.insert at front \n 2.insert at end  \n 3.insert at any pos \n 4.delete from front \n 5.delete from end \n 6.delete at any pos \n 7.traverse \n 8.exit \n ");
 scanf("%d",&ch);
 	   switch(ch)
 	   {
 	  	case 1:
 	  	insf();
 	  	break;
 	  	case 2:
 	  	insend();
 	  	break;
 	  	case 3:
 	  	inmid();
 	  	break;
 	  	case 4:
 	  	delfront();
 	  	break;
 	  	case 5:
 	  	delend();
 	  	break;
 	  	case 6:
 	  	delmid();
 	  	break;
 	  	case 7:
 	  	traverse();
 	  	break;
 	  	case 8:
 	  	return 0;
 	  	break; 
 	   }
 	  } 
 	  return 0;
} 
