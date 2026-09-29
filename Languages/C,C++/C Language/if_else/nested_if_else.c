#include<stdio.h>

int main(){
	
	int age,mark; 
	
	
	printf("Enter a age  ");
	scanf("%d",&age);
	printf("\nEnter a  mark ");
	scanf("%d",&mark);
	
	if(age >=18){
		if(mark >=15 && mark>=20){
			printf("you are passed exam");
		}
		printf("\nyou get a lincens");
	}
	
	
	return 0;
}
