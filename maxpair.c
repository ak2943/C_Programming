//program to find the max numbes product (a*b)

/*#include<stdio.h>
void maxnum(int arr[],int a);
void main()
{
	int arr[5],i,j,n;
	printf("ENTER THE NUMBER OF ARRAY ELEMENTS: ");
	scanf("%d",&n);
	printf("ENTER ARRAY ELEMENTS : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("ARRAY ELEMENTS ARE: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	maxnum(arr,n);
	
}

void maxnum(int arr[],int n)
{   int i,j;
	int a=arr[0],b=arr[1];
	for(i=0;i<n;i++)
	  for(j=i+1;j<n;j++)
	    if(arr[i]*arr[j]>a*b)
	    {
	    	a=arr[i],b=arr[j];
		}
	printf("MAXIMUM NUMBER OF PAIR ARE { %d ,%d }",a,b);
}*/



#include<stdio.h>
void main()
{
	int i,j,n,x,y,a[5];
	printf("ENTER SIZE OF ARRAY: ");
	scanf("%d",&n);
	printf("ENTER ARRAY ELEMENTS: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("CALCULATE MAXIMUM PAIR OF PRODUCT OF GIVEN ARRAY:\n ");
	x=a[0],y=a[1];
	for(i=0;i<n;i++)
	 for(j=i+1;j<n;j++)
	  if(a[i]*a[j]>x*y)
	  {
	  	x=a[i],y=a[j];
	  }
	printf("MAXIMUM PRODUCT NUMBERS ARE { %d,%d }",x,y);
}
