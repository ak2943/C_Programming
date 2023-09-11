#include<stdio.h>
void main()
{
	int i,j,n,a[70],small,temp;
	printf(" \nSELECTION SORT\n");
	printf("------------------\n");
	printf("ENTER NUMBER OF ARRAY ELEMENTS: ");
	scanf("%d",&n);
	printf("ENTER %d ELEMENTS:",n);
	 for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	  for(i=0;i<n;i++)
	  {
	  	small=i;
	  	for(j=i+1;j<n;j++)
	  	{
	  		if(a[small]>a[j])
	  		{
	  			small=j;
			}
		  }
		temp=a[small];
		a[small]=a[i];
		a[i]=temp;
	  }
	printf("ARRAY AFTER APPLYING SELECTION SORT\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
