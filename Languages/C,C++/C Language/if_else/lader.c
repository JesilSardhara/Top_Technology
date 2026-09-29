#include<stdio.h>

int main(){
	
	int age;
	printf("enter Your Age");
	scanf("%d",&age);
	
	if(age >=0 &&  age <=12)
	{
		printf("You are a child");
	}
	else if(age >=13 && age <=18)
	{
		printf("You are a Teenager");
	}
	else
	{
		printf("you are old");
	}
	
	return 0;
}
