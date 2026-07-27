#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	
	char name1[20];
	int data;
	
	printf("Enter your Name : ");
//	scanf("%s",&name1);
	gets(name1);
	
	printf("\nName : %s",name1);
	
	data = strlen(name1);
	printf("\nString length : %d",data);
	
	strupr(name1);
	printf("\nString strupr : %s",name1);
	

	
	getch();
}
