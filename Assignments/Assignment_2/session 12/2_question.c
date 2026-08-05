#include<stdio.h>

struct	fooditem
{
	char itemname[30];
	float price;
	float rating;
};
int main(){
	
	struct fooditem food[3] = {
							{"pizza",199.00,4.9},
							{"Burger",90,4.5},
							{"sandvich",110,4.4}
						};
	

	int i;
	for(i=0;i<3;i++){
		printf("Food Item %d\n", i + 1);
		printf("Food Name   : %s\n", food[i].itemname);
        printf("Food Price  : %.2f\n", food[i].price);
        printf("Food Rating : %.1f\n", food[i].rating);
	}
	return 0;
}
