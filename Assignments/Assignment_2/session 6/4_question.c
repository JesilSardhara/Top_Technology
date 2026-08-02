#include<stdio.h>
#include<conio.h>

int main(){
	
	int i = 10;
	
//	while
	
	while(i<10){
		printf("%d",i);
	}
	printf("loop ended\n");
	
	
	printf("\n\n\n");
//	do While

	do{
		printf("%d\n",i);
		i++;
	}while(i<10);
	
	printf("loop ended\n");
	
	return 0;
}
