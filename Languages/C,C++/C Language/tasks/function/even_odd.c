#include<stdio.h>

int main(){
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	
	
	hlw(a);
	
	return 0;
}

int hlw(a){
	
	if(a % 2 == 0){
		printf("number is even :%d",a);
	}
	else{
		printf("number is odd : %d",a);
	}
		
	return 0;
}
