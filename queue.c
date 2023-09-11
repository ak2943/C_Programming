#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int ch=1,i,n;
int queue[300],front=0,rear=0;
void insert();
void delete();
void display();
int main()
{

	printf("****QUEUE OPERATIONS****\n");

	printf("\n1.INSERT \n2.DELETE \n3.DISPLAY \n4.EXIT\n\n");
	
    while(ch!=4)
	{
    	printf("ENTER YOUR CHOICE: ");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    	case 1:insert();
	    	       break;
	    	case 2:delete();
	    	       break;
			case 3:display();
	    	       break;
		    case 4:exit(0);
			default:printf("wrong choice@\n");
		}
	}
   return 0;	
}


void insert()
{
    if(rear==MAX)
    {
    	printf("QUEUE IS FULL\n\n");
	}
	else
	{
		printf("ENTER THE NUMBER TO INSERT: ");
		scanf("%d",&queue[rear]);
		printf("%d ELEMENT INSERTED SUCCESSFULLY!!!\n\n",queue[rear]);
		rear++;
    }
}

 void delete()
 {
 	if(front==rear)
 	{
 		printf("QUEUE IS EMPTY\n\n");
	}
	else
	{
		printf("%d ELEMENT IS DELETED FROM QUEUE\n\n ",queue[front]);
		front++;
	}
 }
 
 
 void display()
 {
 	
 	if(front==rear)
 	{
 		printf("QUEUE IS EMPTY\n\n");
 	}
	 else
	 {
	    printf("ELEMENTS OF QUEUE ARE\n %d");
	 	for(i=front;i<rear;i++)
	 	{
	 	 printf("%d\n",queue[i]);
	    }
	 }
}

 
	
