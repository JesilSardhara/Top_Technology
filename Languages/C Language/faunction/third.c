/*
	3) without paramter and yes reutnr	
	int/void func-name(){
		
	}
	func-name()
*/

#include<stdio.h>
#include<conio.h>

int test(){
	return 42;
}

void main()
{
	printf("test : %d",test());
	getch();
}
