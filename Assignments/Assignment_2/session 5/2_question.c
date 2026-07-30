#include<stdio.h>
#include<conio.h>

int main(){
	
	int a;
	
	printf("diner time:1\n");
	printf("breakfast:2\n");
	printf("lunch:3\n");
	
	printf("enter your chose(1/2/3):");
	scanf("%d",&a);
	
	switch(a){
	
		case 1:
		printf("diner time: Bhajiya");
		break;
		case 2:
		printf("breakfast: Idli-Vada");
		break;
		case 3:
		printf("lunch: batetanu sak with chapati");
		break;
		default:
			printf("Frut");
	}
	
	return 0;
}
