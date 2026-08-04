#include<stdio.h>


int formatPrice(int price){
	
	printf("#%d\n",price);
	
	return 0;
}



int main(){
	int price;
	int a,b,c;
	
	printf("enter mouse price");
	scanf("%d",&a);
	
	printf("enter monitor price");
	scanf("%d",&b);
	
	printf("enter CPU price");
	scanf("%d",&c);
	
	formatPrice(a);
	formatPrice(b);
	formatPrice(c);
		
	return 0;
}
