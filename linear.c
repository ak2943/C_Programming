/*#include<stdio.h>
void main()
{
	
	int num,n,i,found=0;
	int a[num];
	printf("*********LINEAR SEARCH*********\n\n")
	printf("Enter the Number of Elements");
	scanf("%d",&num);
	 printf("Enter the elements : ");
	  for(i=0;i<num;i++)	
	   {
	   	 scanf("%d",&a[i]);
	   }
	printf("enter the element to be search");
	scanf("%d",&n);
	
	   for(i=0;i<num;i++)
	   {
	   	if(n==a[i])
	       {
	   		found=1;
	   		break;
		   }
	   }
	if(found==1)
	
       printf("Entered Number is Present in Array at %d",i++);
       
	else
	
		printf("Entered Number is Not Present in Array");
	
}*/
 
#include<stdio.h>
void main()
{
	int i,a[90],n,s=0;
	printf("*********LINEAR SEARCH*********\n\n");
	printf("ENTER THE NO OF ELEMENTS OF ARRAY: ");
	scanf("%d",&n);
	printf("ENTER ARRAY ELEMENTS: ");
    	for(i=0;i<n;i++)
	     scanf("%d",&a[i]);
	printf("ENTER ELEMENT TO SEARCH: ");
	scanf("%d",&s);
	 for(i=0;i<n;i++)
	  { 
	      if(s==a[i])
	      {
	      	s=1;
	      	break;
		  }
      }
        if(s==1)
	    printf("%d ELEMENT IS PRESENT IN ARRAY!!",a[i]);
	    else
	    printf("ELEMENT IS NOT FOUND IN ARRAY!!");	
      
}


/*
#include<stdio.h>
void main()
{
	int i,n,s,a[80];
	int f,l,mid;
	printf("ENTER THE NUMBER OF ARRAY ELEMENTS: ");
	scanf("%d",&n);
	printf("ENTER %d ELEMENTS: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("ENTER SEARCH ELEMENT: ");
	scanf("%d",&s);
	f=0;
	l=n-1;
	mid=(f+l)/2;
	
	while(f<=l)
	{
	   if(a[mid]==s)
	   {
	   	printf("%d ELEMENT FOUND AT %d LOCATION",s,mid+1);
	   	break;
	   }
	   else if(a[mid]<s)    
	   {
	   	 f=mid+1;
	   }
	   else
	   {
	   	l=mid-1;     
	   } 
	   mid=(f+l)/2;           
	}    
	if(f>l)
	{
		printf("ELEMENT IS NOT PRESENT**");
	}
}*/



