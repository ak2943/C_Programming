//REVERSE OF STRING USING STRREV FUNCTION
#include<stdio.h>

/*void main()
{
	char a[20];
	printf("ENTER A STRING TO BE REVERSE: \n");
	scanf("%s",a);
	printf("AFTER REVERSING THE STRING : %s",strrev(a));
}*/


//program to reverse a entered number
/*
void main()
{
	int x,y=0,r;
	printf("ENTER NUMBER TO BE REVERSE: ");
	scanf("%d",&x);   //123
	while(x!=0)
	{
		r=x%10;      // 123%10=3   r=3 2  1
		y=y*10+r;   // 0*10+3      y=3 2  1
	    x=x/10;      // 123/10     x=12 1  0
		
	}
	printf("REVERSED NUMBER :%d",y);   
}*/

//PROGRAM TO REVERSE ARRAY ELEMENTS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);  //4
    arr = (int*) malloc(num * sizeof(int));    //4*4=16 will return in int type
    for(i = 0; i < num; i++)                  // 
    {
        scanf("%d", arr+i);                 //1 2 3 4
    }

    /* Write the logic to reverse the array. */

    for(i = num-1; i >=0 ; i--)           // 3   
        printf("%d ", *(arr + i));        //4 3 2 1
    return 0;
}


