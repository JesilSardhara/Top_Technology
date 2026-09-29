#include<stdio.h>

int main(){
	int a,b;
	printf("enter a number a:");
	scanf("%d",&a);	
	printf("enter a number b:");
	scanf("%d",&b);	
	
	big(a,b);
	
	return 0;
}

int big(a,b){
	
	if(a>b){
		printf("a is big :%d",a);
	}	
	else{
		printf("b is big :%d",b);
	}	
	return 0;
}
