//fibonacci series :next number is a sum of privious 2 numbers 
//ex--0,1,1,2,3,5,8,13.....

#include<stdio.h>
void fibo(int);
void main()
{
  int n;
  printf("ENTER THE NUMBERS OF ELEMENT :");
  scanf("%d",&n);
  printf("FIBONACCI SERIES: ");
  printf("%d %d ",0,1);
  fibo(n-2);	
}

void fibo(int n)
{
	static int n1=0,n2=1,n3;
	if(n>0)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d ",n3);
		fibo(n-1);
	}
}
