#include<stdio.h>
int main()
{
	int i,n,search,a[600];
	int first,last,mid;
	printf("\t\t***\bBINARY SEARCH***\n");
	printf("ENTER THE NUMBER OF ARRAY ELEMENTS: ");
	scanf("%d",&n);
	
	printf("BINARY SEARCH ALGORITHM WORKS ONLY ON SORTED ARRAY!!!\n\n");
	printf("ENTER %d ELEMENTS IN ASCENDING ORDER:\n",n);
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 
	 first=0;
	 last=n-1;
	 mid=first+last/2;
	 
	 printf("ENTER THE SEARCH ELEMENT: ");
	 scanf("%d",&search);
	 
	 while(first<=last)
	 {
	 	if(a[mid]==search)
	 	{
	 		printf("%d ELEMENT FOUND AT %d INDEX",search,i-1);
	 		break;
		}
		else if(a[mid]<search)
		{
			first=mid+1;
		}
		else
		{
			last=mid-1;
		}
	  mid=(first+last)/2;
	 }
	if(first>last)
	{
		printf("ELEMENT NOT FOUND!!!!!",search);
	}
	return 0;
}





















