#include<stdio.h>

int main(){
	
	int r,c,k;
	
//	for(r=1;r<=5;r++){
//		for(c=1;c<=r;c++){
//			printf("*");
//		}
//		printf("\n");
//	}

//	for(r=5;r>=1;r--){
//		for(c=1;c<=r;c++){
//			printf("*");
//		}
//		printf("\n");
//	}

//	for(r=1;r<=5;r++){
//		for(c=1;c<=r;c++){
//			printf("%d",r);
//		}
//		printf("\n");
//	}

//	for(r=1;r<=5;r++){
//		for(k=5;k>=r;k--){
//			printf(" ");
//		}
//		for(c=1;c<=r;c++){
//			printf("*");
//		}
//		printf("\n");
//	}

	for(r=1;r<=5;r++){
		for(k=0;k<=r;k++){
			printf(" ");
		}
		for(c=5;c>=r;c--){
			printf("*");
		}
		printf("\n");
		}
	
	
	return 0;
}
