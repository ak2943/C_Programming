//  strcmp(string1,string2);

#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	char cat[10];
	char dept[20];
};
 void main()
 {
 	int i;
 	struct student s[2];
 	for(i=0;i<2;i++)
 	{
 	printf("\n+++++++++++ENTER STUDENT DETAILS+++++++++++\n");
 	printf("ENTER STUDENT ROLLNO: ");
 	scanf("%d",&s[i].rollno);
 	printf("ENTER STUDENT NAME: ");
 	scanf("%s",s[i].name);
 	printf("ENTER STUDENT CATOGERY: ");
 	scanf("%s",s[i].cat);
 	printf("ENTER STUDENT DEPARTMENT: ");
 	scanf("%s",s[i].dept);
 	printf("-----------------------------\n");
   }
 	//printf("-------------DISPLAY INFORMATION OF STUDENT---------------");
 	printf("DISPLAY STUDENT INFO OF ONLY OBC CATOGERY!!!\n\n");
 
 	for(i=0;i<2;i++)
 	{   
	   int x="obc";
	   int r=strcmp(s[i].cat,x);
	   if(r==0)
 	    {
 		  printf("STUDENT ROLLNO: %d\n",s[i].rollno);
 		  printf("STUDENT NAME IS: %s\n",s[i].name);
 		  printf("STUDENT CATOGERY IS: %s\n",s[i].cat);
 		  printf("STUDENT DEPARTMENT IS: %s\n",s[i].dept);
 		
 	    }
 	
	 }
 	
 }
