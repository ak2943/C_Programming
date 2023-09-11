#include<stdio.h>
int main()
{
	int i,j,n1,n2,a[i][j],b[i][j],c[i][j];
	
	printf("ENTER THE NUMBER OF ELEMENTS OF A MATRIX:\n ");
	scanf("%d",&n1);
	
	 for(i=0;i<n1;i++)
	  for(j=0;j<n1;j++)
	  {
	   printf("ENTER THE ELEMENTS OF A:%d%d",i+1,j+1);
	   scanf("%d",&a[i][j]);
      }
	printf("ENTER THE NUMBER OF ELEMENTS OF B MATRIX: \n");
	scanf("%d",&n2);
	
	 for(i=0;i<n2;i++)
	  for(j=0;j<n2;j++)
	  {
	  printf("ENTER THE ELEMENTS OF B:%d%d",i+1,j+1);
	   scanf("%d",&b[i][j]);
      }
      ///multiplication
      printf("\nMULTIPLY A AND B:\n");
      for(i=0;i<n1;i++)
	  for(j=0;j<n2;j++)
	  {
	  	c[i][j]=a[i][j]*b[i][j];
	  }
	  
	  printf("MULTIPLICATION:: ");
	  for(i=0;i<n1;i++)
	  for(j=0;j<n2;j++)
	  {
	  	printf("%.1d",c[i][j]);
	  	if(j==1)
	  	 printf("\n");
      }
      
	 
	 return 0;
}
