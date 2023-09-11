   //---------****CALL BY REFERANCE****--------//
#include<stdio.h>
void swap(int *,int *);
void main()
{
   int x,y;
   printf("enter the values of x and y: ");
   scanf("%d%d",&x,&y);
     printf("values of X and Y before swapping x=%d y=%d\n",x,y);
	 swap(&x,&y);
}
   void swap(int *a,int *b)
   {
   	int temp;
   	temp=*a;
   	*a=*b;
   	*b=temp;
   	printf("values of A and B after swapping a=%d b=%d",*a,*b);
   	
   }
