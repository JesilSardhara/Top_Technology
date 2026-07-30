#include<stdio.h>
#include<conio.h>

int main(){
	
	int amount,total,total1;
	
	
	printf("you are a Amaunt :");
	scanf("%d",&amount);
		
	if(amount>=2000){
		total =amount - ((amount *20)/100);
		printf("This is final price with Discount:%d",total);
	}	
	else if(amount>1000){
		total1 = amount -((amount *10)/100);
		printf("This is final price with Discount:%d",total1);
	}
	else{
		printf("your Amount is:%d",amount);
	}

	
	
	
	return 0;
}
