#include<stdio.h>

int main(){
	
	int a ,b,c,d,e;

	
	printf("1 st:");
	scanf("%d",&a);
	
	printf("2nd:");
	scanf("%d",&b);	
	
	printf("3rd:");
	scanf("%d",&c);	
	
	printf("4th:");
	scanf("%d",&d);	
	
	printf("5th:");
	scanf("%d",&e);	


	float sum = (a+b+c+d+e)/5;
		
//	int area = l*w;
	
	printf("avarage of number: %.2f",sum);
	
	return 0;
}
