#include<stdio.h>
/*int main()
{
	int i,j,temp;
	int a[5];
	printf("ENTER AYYAR ELE : ");
	for(i=0;i<5;i++)
	{
      	scanf("%d",&a[i]);	
	}
	 for(i=0;i<5;i++)//21
	 {
	 	for(j=i+1;j<5;j++)
	 	{
	 		if(a[i]>a[j])
	 		{
	 			temp=a[i]; //2
	 			a[i]=a[j]; //1
	 			a[j]=temp;
			 }
		 }
	 }
	 for(i=0;i<5;i++)
	{
      	printf("%d",a[i]);	
	}
	
}*/


//palindrome
int main()
{
	int n,s,c,r;
	printf("ENTER NUMBER ");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		r=n%10;
		s=r+(s*10);
		n=n/10;
		
	}
	if(s==c)
	{
		printf("PALINDROME NUMBER");
	}
	else
	{
		printf("NOT PALINDROME NUMBER");
	}
	return 0;
}
