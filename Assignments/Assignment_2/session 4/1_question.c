#include<stdio.h>
#include<conio.h>
	

int javascript(float price,int quantity){
	
	int total;
	
	total = price * quantity;
	printf("\ntotal :%d",total);
	
	return total;
}

int main(){
	int quantity;
	float price;
		
	printf("enter a price:");
	scanf("%f",&price);
	
	printf("enter quantity:");	
	scanf("%d",&quantity);
	
	javascript(price,quantity);
	
	
	return 0;
}
