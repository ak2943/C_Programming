//PROGRAM - STORAGE CLASS----1.AUTO 2.REGISTER 3.EXTERN 4.STATIC
#include<stdio.h>
int x;
void autoclass()
{
	printf("AUTO CLASS\n");
	auto int x=5;
	printf("THE VALUE OF X DECLARED AS AUTO IS: %d\n",x);
	printf("--------------------------------\n");
}

void registerclass()
{
	printf("REGISTER CLASS\n");
	register int x='a';
	printf("VALUE OF X DECLARED AS REGISTER IS : %d\n",x);
	printf("--------------------------------\n");
}

void externclass()
{
	printf("EXTERN CLASS\n");
	extern int x;
	printf("THE VALUE OF X DECLARED AS EXTERN IS : %d\n",x);
	x=20;
	printf("MODIFIED VALUE OF X DECLARED AS EXTERN IS : %d\n",x);
	printf("--------------------------------\n");
}

void staticclass()
{
	int i;
	printf("STATIC CLASS\n");
	for(i=0;i<5;i++)
	{
		static int y=0;
	    int p=0;
	    y++;
	    p++;
		printf("VALUE OF Y DECLARED AS STATIC : %d\n",y);
		printf("VALUE OF P DECLARED AS NON STATIC : %d\n",p);
	}
	printf("--------------------------------\n");
}

void main()
{
	printf("\t DEMONSTRATION OF STORAGE CLASSES IC C\n\n");
	autoclass();
	registerclass();
	externclass();
	staticclass();
	
}


//PROGRAN ON STATIC STORAGE CLASS:
/*#include<stdio.h>
int show();
int show1();
void main()
{
	printf("------STATIC KEYWORD-----\n");
	printf("VALUES OF B USING STATIC VARIABLE\n");
	printf("VALUE OF B: %d\n",show());
	printf("VALUE OF B: %d\n",show());
	printf("VALUES OF A USING VARIABLE\n");
	printf("VALUE OF A: %d\n",show1());
	printf("VALUE OF A: %d\n",show1());
}
int show()
{
	static int b=10;
	b++;	
	return b;
}

int show1()
{
	int a=10;
	a++;
	return a;
}*/
