//	if(top>=0) ----display elements
//  if(top>=n-1)-----stack overflow
//  if(top<=-1)-----stack underflow


/*#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int ch=1,i,n,x;
int stack[5],top=-1;
void push();
void pop();
void display();
int main()
{
     
	printf("\t****STACK OPERATIONS****\n\n");
	printf("ENTER THE SIZE OF STACK: ");
	scanf("%d",&n);

	printf("\n1.PUSH \n2.POP \n3.DISPLAY \n4.EXIT\n\n");
	
    while(ch)
	{
    	printf("ENTER YOUR CHOICE: \n");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    	case 1:push();
	    	       break;
	    	case 2:pop();
	    	       break;
			case 3:display();
	    	       break;
		    case 4:exit(0);
			default:printf("wrong choice@\n");
		}
	}
   return 0;	
}

void push()
{
	if(top>=n-1)
	{
		printf("STACK IS OVERFLOW\n");
	}
	else
	{
		printf("ENTER ELEMENT TO PUSH: ");
		scanf("%d",&x);
		top++;
		stack[top]=x;
		printf("%d IS INSERTED IN STACK!\n",x);
	}
}

void pop()
{
	if(top<=-1)
	{
		printf("STACK UNDEFLOW\n");
	}
	else
	{
		printf("%d IS DELETED FROM STACK\n",stack[top]);
		top--;
	}
}

void display()
{
	if(top>=0)
	{
		printf("STACK ELEMENTS ARE\n");
		for(i=top;i>=0;i--)
			printf("%d\n",stack[i]);	
	}
	 else
	 {
	 	printf("STACK IS EMPTY\n");
	 }
	
}*/



#include<stdio.h>
#define max 5
int ch=1,i,n,s[5],top=-1;
void push();
void pop();
void display();
void main()
{
   printf("ENTER THE SIZE OF STACK ELEMENTS: ");
   scanf("%d",&n);
   printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
   while(ch!=4)
   {
   	printf("ENTER YOUR CHOICE:");
   	scanf("%d",&ch);
   	 switch(ch)
   	 {
   	 	case 1:push();
			   break;
		case 2:pop();
			   break;
		case 3:display();
			   break;
		case 4: exit(0);
			
			
	   default:printf("WRONG CHOICE@");	
	 }
   }
}

void push()
{
   if(top>n-1)
   {
   	printf("STACK IS OVERFLOW\n\n");
   }
   else
   {
   	    printf("ENTER ELEMENT TO INSERT: ");
   	  	top++;
   		scanf("%d",&s[top]);
   		printf("%d is pushed in stack successfully \n\n",s[top]);
   }
 	
}

void pop()
{
	if(top<-1)
	{
		printf("STACK IS UNDERFLOW\n\n");
	}
	else
	{
		printf("%d is poped from stack \n\n",s[top]);
		top--;
	}
}


void display()
{
	if(top>=0)
	{
		printf("STACK ELEMENTS ARE\n\n");
		for(i=top;i>=0;i--)
			printf("%d\n",s[i]);	
	}
	 else
	 {
	 	printf("STACK IS UNDERFLOW\n");
	 }
	
}




