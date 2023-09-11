int main()
{
	int i,small,greater,n;
	int a[i];
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	 printf("enter the elements of array: ");
	   for(i=0;i<n;i++)
	   {
	   	scanf("%d",&a[i]);
	   }
	   small=a[0];
	     for(i=0;i<n;i++)
	      { 
	      if(small>a[i])
	       {
	      	small=a[i];
		   }
		  }
		greater=a[0];
		for(i=0;i<n;i++)
		{
			if(greater<a[i])
			{
				greater=a[i];
			}
		}
		  printf("Small number id %d :\n",small);
		  printf("Greater number id %d :",greater);
		  
}
