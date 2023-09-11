#include<stdio.h>
void main()
{
	int n,i=1;
	printf("ENTER A NUMBER :");
	scanf("%d",&n);
	printf("%d Tables is :\n",n);
	    while(i<=10)
	    {
	    	printf("%d*%d=%d\n",n,i,n*i);
	    	i++;
		}
}
