#include<stdio.h>
#include<conio.h>

int main(){
	
	int age;
	
	printf("enter your age:");
	scanf("%d",&age);
	
	if(age>=25){
		printf("Eligible for Car Rental");
	}
	else if(age>=21){
		printf("Eligible for Credit Card");
	}
	else if(age>=18){
		printf("Eligible for Driving License");
	}
	else{
		printf("you are child to play with ball");
	}
	
	return 0;
}
