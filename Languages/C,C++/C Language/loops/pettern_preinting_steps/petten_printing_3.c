#include<stdio.h>

int main(){
	
	int r,c,k;
	
	for(r=1;r<=5;r++){
		for(c=1;c<=r;c++){
			printf("%d",c);		//task = 1
		}
		printf("\n");
	}
	
	for(r=1;r<=5;r++){
		for(c=1;c<=r;c++){
			printf("%d",r);		//Task = 2
		}
		printf("\n");
	}
	
	return 0;
}
