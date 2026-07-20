#include<stdio.h>

//******
//******
//******
//******
//******

int main(){
	
	int r,c;
	
//	for(r=1;r<=5;r++){
//		for(c=1;c<=5;c++){
//		printf("8");
//		}
//		printf("\n");
//	}
	
	for(c=1;c<=5;c++){
		for(r=1;r<=c;r++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
