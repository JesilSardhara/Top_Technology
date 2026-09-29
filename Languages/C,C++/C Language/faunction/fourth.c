/*
	2) with parameter and with return 	
	int/void func-name(){
		
	}
	func-name()
*/

#include<stdio.h>
#include<conio.h>

int sub(x,y){
	int data;
	data = x - y;
	return data;
}

void main()
{
	printf("sub : %d",sub(30,20));
	printf("\nSub1 : %d",sub(40,20));
	getch();
}
