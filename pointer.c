/*pointers and dynamic memory allocation*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
	//PRINT VALUE OF A AND B BY POINTING A 
	/*int a,b,*p;
	p=&a;
	b=*p;
	printf("ENTER VALUE OF A: ");
	scanf("%d",&a);
	printf("VALUE OF A: %d\n",a);
	printf("VALUE OF B: %d",*p);*/
	
	
	//program to display array elements
	/*int a[5],i,n,*p;
	printf("ENTER SIZE OF ARRAY");
	scanf("%d",&n);
	printf("ENTER ARRAY ELEMENTS: ");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 p=&a[0];
	 printf("ARRAY ELEMENTS ARE:");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d\n",*p);
	 	p++;
	 }*/
	 
	/* int a,b;
	 int *p1,*p2;
	 p1=&a;
	 p2=&b;
	 printf("ENTER VALUES OF A AND B: ");
	 scanf("%d%d",&a,&b);
	 printf("ADDITION = %d",(*p1+*p2));*/
	 
	 //PROGRAM TO FIND GREATER NUMBER 
	/* int a[5],g;
	 int i,*p;
	 printf("ENTER THE ARRAY ELEMENTS: ");
	  for(i=0;i<5;i++)
	  {
	  	scanf("%d",&a[i]);
	  }
	//g=a[0];
	p=&a[0];
	for(i=0;i<5;i++)
	{
		if(*p < a[i])
		{
			p=&a[i];
		}
	}
		printf("GREATEST NUMBER IS %d",*p);
	*/
	
		
		//sum of array elements
	/*	int i,a[5],sum=0,*p;
		p=&a[0];
		printf("ENTER ARRAY ELEMENTS:");
		for(i=0;i<5;i++)
		{
			scanf("%d",&a[i]);
		}
	     for(i=0;i<5;i++)
	     {
	     	sum=sum+*p;
	     	p++;
		 }
	 printf("SUM=%d",sum);  */
	 
	 //program to find prime number
	int prime=0;
	int i,n,*p;
	p=&n;
	printf("ENTER NUMBER: ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			prime=1;
			break;
		}
	}
	if(prime==1)
	{
		printf("%d is a prime number",*p);
	}
	else
	{
		printf("%d is not a prime number",*p);
    }		    
}



/*void main()
{
  int a,b,*p1,*p2;
  p1=&a;
  p2=&b;
  printf("ENTER VALUES OF AND A AND B:");
  scanf("%d%d",&a,&b);
  printf("ADDITION : %d",(*p1)+(*p2));
  	
}*/

/*
int display(int*);
int i,a[5];
void main()
{
	printf("ENTER ARRAY ELEMENTS: ");
	 for(i=0;i<5;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 display(&a[0]);    //send only address of 0th index
}

int display(int *p)     //declare a pointer
{   
    printf("ELEMENTS OF ARRAY ARE: \n");   
	for(i=0;i<5;i++)
	{
		printf("%d\n",*p);       //pointer store value 
		p++;                     //point to next address
	}
	return 0;
}
*/
/*
int show(int*,int*);
void main()
{
	int a,b;
	printf("ENTER VALUES OF A AND B: ");
	scanf("%d%d",&a,&b);
	show(&a,&b);
	printf("AFTER SWAPING VALUES OF A: %d AND B: %d ",a,b);
}

int show(int *p1,int *p2)   //a=1 b=2
{
	*p1=*p1+*p2;       //a=3
	*p2=*p1-*p2;      //b=1
	*p1=*p1-*p2;      //a=2
	
	return 0;
}*/



//CHECK SIZE OF DATATYPE
/*void main()
{
	int a=10;
	char ch='a';
	printf("DISPALY SIZE OF INTEGER : %d \n",sizeof(int)); //4 coz integer store 4 bytes
	printf("DISPALY SIZE OF CHARACTER : %d \n",sizeof(char));
	printf("DISPALY SIZE OF FLOAT : %d \n",sizeof(float));
	printf("DISPALY SIZE OF CHARACTER :%d ",sizeof(ch));
}*/


//SWAP 2 NOS WITHOUT FUNCTION
/*void main()
{
	int a,b;
	int *p1,*p2;
	p1=&a;
	p2=&b;
	printf("ENTER THE VALUES OF A AND B: ");
	scanf("%d%d",&a,&b);
	printf("BEFORE SWAPING A=%d AND B=%d\n",*p1,*p2);
	*p1=*p1+*p2;
	*p2=*p1-*p2;
	*p1=*p1-*p2;
	printf("AFTER SWAPING A=%d AND B=%d\n",*p1,*p2);
}*/



//PROGRAM USING CALLOC MALLOC REALLOC AND FREE
/*
void main()
{
	int i,n,*p,x;
	printf("ENTER THE SIZE OF ARRAY: ");
	scanf("%d",&n);
	//MALLOC()
	//IF THE ALLOCATION OF MEMEORY FAILS AND IT RETURN NULL PTR 
	//ALL THE VALUES AT ALLOCATED MEMORY ARE INITIALIZED TO GARBEGE VALUES
	
	printf("ENTER ELEMENTS OF ARRAY:\n ");
	p=(int*)malloc(n*sizeof(int));	
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&p[i]);
	 }
	 printf("ELEMENTS OF ARRAY ARE:\n");
	  for(i=0;i<n;i++)
	  {
	  	printf("%d\n",p[i]);
	  }*/
	  
	//CALLOC() 
	//IF THE ALLOCATION OF MEMEORY FAILS AND IT RETURN NULL PTR 
	//ALL THE VALUES AT ALLOCATED MEMORY ARE INITIALIZED TO 0.
	
	/*printf("ENTER ELEMENTS OF ARRAY:\n ");
	p=(int*)calloc(n,sizeof(int));	
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&p[i]);
	 }
	 printf("ELEMENTS OF ARRAY ARE: \n");
	  for(i=0;i<n;i++)
	  {
	  	printf("%d\n",p[i]);
	  }*/
	
	 //realloc()
	 //WE CHANGE THE VALUE OF PREVIOUS ALLOCATED MEMORY
	 /*printf("ENTER THE VALUE TO RELLOC THE ARRAY\n");
	 scanf("%d",&x);
	 p=(int*)realloc(p,x*sizeof(int));
	 printf("ENTER NEW ARRAY ELEMENTS : ");
	 for(i=0;i<x;i++)
	 {
		scanf("%d",&p[i]);
	 }
	 printf("NEW ARRAY ELEMENTS ARE: ");
	 for(i=0;i<x;i++)
	 {
	 	printf("%d\n",p[i]);
	 }
	 
	 free(p);
}*/


