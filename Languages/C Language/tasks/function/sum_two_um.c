#include<stdio.h>

int main(){
	int a,b;
	printf("enter a number:");
	scanf("%d",&a);
	printf("enter a number:");
	scanf("%d",&b);	
	
	hlw(a,b);
	
	return 0;
}

int hlw(a,b){
	int sum;
	sum = a+b;
	
	printf("sum is :%d",sum);
	
	return 0;
}
