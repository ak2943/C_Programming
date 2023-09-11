#include<stdio.h>
void main()
{
	int i,j,n,temp;
	int a[200];
	printf("Enter the no of ellements of array: ");
	scanf("%d",&n);
	printf("ENTER THE ARRAY ELEMENTS::");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	for(i=0;i<n;i++)
	 for(j=0;j<n-1;j++)
	 {
	 	if(a[j]>a[j+1])
	 	{
	 		temp=a[j];
	 		a[j]=a[j+1];
	 		a[j+1]=temp;
		 }
	 }
	printf("SORTED ARRAY IS:");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d\n",a[i]);
	 }
}
