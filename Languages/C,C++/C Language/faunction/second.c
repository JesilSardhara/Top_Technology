/*
	2) with parameter and no return 	
	int/void func-name(){
		
	}
	func-name()
*/

#include<stdio.h>
#include<conio.h>

void addition(a,b){
	int sum;
	sum = a + b;
	printf("\nSum : %d",sum);
}


void main()
{
	addition(30,10);
	addition(40,30);
	getch();
}
