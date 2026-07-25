#include<stdio.h>

int main(){
	
	int a ;
	int rate;
	int time;
	
	printf("value:");
	scanf("%d",&a);
	
	printf("interest rate:");
	scanf("%d",&rate);	
	
	printf("time in year:");
	scanf("%d",&time);	


	float intereset = a*rate*time /100 ;
		
//	int area = l*w;
	
	printf("Interest %f",intereset);
	
	return 0;
}
