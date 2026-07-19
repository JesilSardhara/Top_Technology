#include<stdio.h>

int main(){
	
	int a,b,c;
	
	printf("Enter a value ");
	scanf("%d",&a);
	printf("Enter a value ");
	scanf("%d",&b);
	printf("Enter a value 1 addi, 2substra, 3divi, 4multi ");
	scanf("%d",&c);
	
	switch(c){
		case 1:
			printf("addition%d",a+b);
			break;
		case 2:
			printf("substraction%d",a-b);
			break;
		case 3:
			printf("divison %d",b/a);
			break;
		case 4:
			printf("multi %d",a*b);
			break;
	}
	 

	
	return 0;
}
