#include<stdio.h>
#include<conio.h>

int EligibleForOffer(int age,int order){
	
	if(age>=18 && order>500){
		
		return 1;
	}
	else{
		return 0;
	}
	
}


int main(){
	
	int age,order;
	
	printf("enter a age :");
	scanf("%d",&age);
	
	printf("enter a order prise :");
	scanf("%d",&order);
	
	if (EligibleForOffer(age,order)){
		printf("you are eligebal");
	}
	else{
		printf("you are not eligebal");
	}
	
	return 0;
}


