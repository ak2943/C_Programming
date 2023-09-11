/*#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE;

NODE *head;

void binsert()
{
	int x;
	NODE *p;
	p=(NODE*)malloc(sizeof(NODE));
	if(p==NULL)
	{
		printf("MEMORY FULL");
	}
	else
	{
		printf("ENTER ELEMENT: ");
		scanf("%d",&x);
		p->data=x;
		p->next=head;
		head=p;
		printf("NODE INSERTED!\n\n");
	}
}

void linsert()
{
	int x;
	NODE *p,*temp;
	p=(NODE*)malloc(sizeof(NODE));
	if(p==NULL)
	{
		printf("MEMORY FULL\n");
	}
	else
	{
		printf("ENTER ELEMENT: ");
		scanf("%d",&x);
		p->data=x;
		if(head==NULL)
		{
			p->next=NULL;
			head=p;
			printf("ELEMENT INSERTED\n\n");
		}
		else
		{
			temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			p->next=NULL;
			temp->next=p;
			printf("ELEMENT INSERTED AT LAST!\n\n");
		}
	}
}

void rinsert()
{
    int x,loc,i;
    NODE *p,*temp;
    
    p=(NODE*)malloc(sizeof(NODE));
     if(p==NULL)
     {
     	printf("MEMORY FULL\n\n");
	 }
	 else
	 {
	 	printf("ENTER ELEMENT: ");
	 	scanf("%d",&x);
	 	p->data=x;
	 	printf("ENTER THE LOCATION AFTER WHICH YOU WANT TO INSERT ELE ");
	 	scanf("%d",&loc);
	 	temp=head;
	 	for(i=1;i<loc;i++)
	 	{
	 		temp=temp->next;
	 		if(temp==NULL)
	 		{
	 			printf("CANT INSERT@\n\n");
	 			return;
			}
		 }
		p->next=temp->next;
		temp->next=p;
		printf("ELEMENT INSERTED AT %d LOCATION\n\n",loc+1);
    }
}

void display1()
{
  NODE *p;
  p=head;
  if(p==NULL)
  {
  	printf("LIST IS EMPTY\n\n");
  }	
  else
  {
  	printf("LIST IS: \n");
  	do
  	{
  		printf("%d\n",p->data);
  		p=p->next;
	}while(p!=NULL);
  }
}

void bdelete()
{
	NODE *p;
	if(head==NULL)
	{
	  head=p;
	  free(p);
	  printf("ELEMENT DELETED!\n\n");	
	}
	else
	{
		p=head;
		head=p->next;
		free(p);
		printf("BEGIN ELEMENT DELETED!\n\n");
	}
}

void ldelete()
{
	NODE *p1,*p2;
	if(head==NULL)
	{
		printf("EMPTY LIST!\n\n");
	}
	else if(head->next==NULL)
	{
		p1=head;
		free(p1);
		printf("ONLY ONE NODE IS PRESENT AND IT IS DELETED!\n\n");
	}
	else
	{
		p1=head;
		while(p1->next!=NULL)
		{
			p2=p1;
			p1=p1->next;
		}
	  p2->next=NULL;
	  free(p1);
	  printf("LAST NODE DELETED!\n\n");
	}
  
}

void rdelete()
{
	NODE *p1,*p2;
	int loc,i;
	printf("ENTER LOC NODE TO DELETE: ");
	scanf("%d",&loc);
	p1=head;
	 for(i=0;i<loc;i++)
	 {
	 	p2=p1;
	 	p1=p1->next;
	 	if(p1==NULL)
	 	{
	 		printf("CANT DELETE\n\n");
	 		return;
		}
	 }
	p2->next=NULL;
	free(p1);
	printf("%d ELEMENT DELETED\n\n",loc+1);
}

void search()
{
	int search,i;
	
}

void main()
{
	int ch=0;
	printf("\t***LINKED LIST***\n\n");
	while(ch!=4)
	{
		printf("----MAIN MENU----\n\n");
	    printf("1.BEGIN_INSERT\n2.LAST_INSERT\n3.RANDOM_INSERT\n4.DISPLAY\n");
	    printf("5.BEGIN_DELETE\n6.LAST_DELETE\n7.RANDOM_DELETE\n8.EXIT\n\n");
		printf("ENTER YOUR CHOICE: ");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    	case 1: binsert();
	    	        break;
	    	case 2: linsert();
	    	        break;
	    	case 3: rinsert();
	    	        break;
	    	case 4: display1();
	    	        break;
	    	case 5: bdelete();
	    	        break;
	    	case 6: ldelete();
	    	        break;
	    	case 7: rdelete();
	    	        break;
	    	case 8: exit(0);
	
		}
	}
	
}
*/

#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
 int data;
 struct node *next;
}NODE;
NODE *head; // struct node *head;

void beginsert();
void lastinsert();
void Delete();
void display();

void main()
{
 int choice =0;
 printf("\n\t\t --------------- MAIN MENU ----------------\n");
 printf("\n\t\t 1.INSERT IN BEGINING \n\t\t 2.INSERT AT LAST \n\t\t 3.DELETE \n\t\t 4.DISPLAY \n\t\t 5.EXIT\n");
 printf("\n\t\t ------------------------------------------");
 while(choice != 5)
 {
 printf("\n\t\t ENTER YOUR CHOICE : ");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1: beginsert();
 break;
 case 2: lastinsert();
 break;
 case 3: Delete();
 break;
 case 4: display();
 break;
 case 5: exit(0);
 default: printf("\n\t\t WRONG CHOICE");
 }
 }
} 
void beginsert()
{
 NODE *ptr;
 int item;
 ptr=(NODE *)malloc(sizeof(NODE));
 if(ptr==NULL)
 {
 printf("\n\t\t PRIMARY MEMORY OVERFLOW");
 }
 else
 {
 printf("\n\t\t ENTER DATA : ");
 scanf("%d",&item);
 ptr->data=item;
 ptr->next=head;
 head=ptr;
 printf("\n\t\t NODE INSERTED SUCCESSFULY AT BIGINNING ");
 }
}
void lastinsert()
{
 struct node *ptr,*temp;
 int item;
 ptr = (struct node *)malloc(sizeof(struct node));
 if(ptr==NULL)
 {
 printf("\n\t\t PRIMARY MEMORY OVERFLOW");
 }
 else
 {
 printf("\n\t\t ENTER DATA : ");
 scanf("%d",&item);
 ptr->data=item;
 if(head==NULL)
 {
 ptr->next=NULL;
 head=ptr;
 printf("\n\t\t NODE INSERTED SUCCESSFULLY AT LAST");
 }
 else
 {
 temp=head;
 while (temp->next!=NULL)
 {
 temp=temp->next;
 }
 temp->next=ptr;
 ptr->next=NULL;
 printf("\n\t\t NODE INSERTED SUCCESSFULLY AT LAST");
 }
 }
} 

void Delete()
{
 struct node *ptr;
 if(head==NULL)
 {
 printf("\n\t\t EMPTY LIST");
 }
 else
 {
 ptr=head;
 head=ptr->next;
 free(ptr);
 printf("\n\t\t NODE DELETED SUCCESSFULLY");
 }
} 

void display()
{
 struct node *ptr;
 ptr=head;
 if(ptr==NULL)
 {
 printf("\n\t\t EMPLTY LIST");
 }
 else
 {
 printf("\n\t\t PRINTING DATA : ");
 do
 {
 printf(" %d ",ptr->data);
 ptr=ptr->next;
 } while(ptr != NULL);
 }
}






