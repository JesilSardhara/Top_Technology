#include<stdio.h>

int main(){
	
	int r,c,k;
	
//	for(r=1; r<=5; r++){
//		for(k=5; k>=r; k--){
//			printf(" ");
//		}
//		for(c=1;c<=r;c++){		// fourth
//			printf("*");
//		}
//		printf("\n");
//	}

	for(r=5;r>=1;r--){
		for(k=5;k>=r;k--){
			printf(" ");
		}
		for (c=1;c<=r;c++){
			printf("*");			//fifth
		}
		printf("\n");
	}


    
	return 0;
}
