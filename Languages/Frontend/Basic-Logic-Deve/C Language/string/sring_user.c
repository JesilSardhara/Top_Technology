#include<stdio.h>
#include<conio.h>

void main()
{
	
	char name1[20];
	
	printf("Enter your Name : ");
//	scanf("%s",&name1);
	gets(name1);
	
	printf("\nName : %s",name1);
	
	getch();
}
