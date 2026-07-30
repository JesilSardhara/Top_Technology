#include<stdio.h>
#include<conio.h>

int main(){
	
	int call;
	printf("1 Gujarat Titans\n");
	printf("2. Royal Challengers Bengaluru\n");
	
	printf("enter Your Team name(1/2):");
	scanf("%d",&call);
	
	if(call == 1 ){
		printf("Gujrat Titan Will Win The Match..\n");
	}
	else if(call == 2){
		printf("Royal Challeges Banglor Will Won The Match\n");
	}
	else{
		printf("enter a valid choise");
	}
	
	
	return 0;
}
