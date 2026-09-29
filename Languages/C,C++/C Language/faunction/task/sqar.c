#include<stdio.h>



void main(){
	
	int n;
	
	printf("enter a number");
	scanf("%d",&n);
	
	printf("square number:%d",square(n));
	
	getch();
}


int square(int n){
	int value;
	
	value = n *n;
	
	return value;
}
