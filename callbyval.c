//---------****CALL BY VALUE****--------//
#include<stdio.h>
void swap(int x,int y);
void main()
{   
    int x, y;
	printf("ENTER THE VALUES OF X AND Y: ");
	scanf("%d%d",&x,&y);
    printf("\nValue of x and y before swap x=%d y=%d\n",x,y);	
	swap(x,y);
}
  void swap(int x,int y)
  {
  	int temp;
  	temp=x;
  	x=y;
  	y=temp;
  	printf("value of x and y after swap x=%d y=%d",x,y);
  }
