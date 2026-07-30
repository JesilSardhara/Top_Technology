#include<stdio.h>

int main(){
	
	int i= 10,j,k;
//	for(i=1;i<=10;i++){
////		printf("%d\n",i);
//		if(i == 2){
//			printf("i am here %d\n",i);
//		}
//		else{
//			printf("%d\n",i);
//		}
//	}
	for(i=5;i>=1;i--){
//		for(k=5;k>=i;k--){
//			printf(" ");
//		}
		for(j=1;j<=i;j++){
			printf("*");
		}
			printf("\n");
	}
	
//	i = 1	
//	while (i>=1){
//		printf("%d\n",i);
//		i--;
//	}

//	do{
//		printf("%d\n",i);
//		i--;
//	}while(i>=1);
	return 0;
}
