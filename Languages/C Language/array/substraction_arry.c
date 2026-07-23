#include<stdio.h>

void main(){
	
	int a[2][2],b[2][2],sum[2][2];
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter your element A[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}	
	
	printf("\n--first arry--\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter your element A[%d][%d]:%d\n",i,j,a[i][j]);
		}
	}	
	printf("\n\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter your element A[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}	
	
	printf("\n--second arry--\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter your element B[%d][%d]:%d\n",i,j,b[i][j]);
		}
	}	
	
	printf("\n\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum[i][j] = a[i][j] - b[i][j];
		}
	}
	
	printf("\n---Sum of Array---\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("sum[%d][%d] : %d\n",i,j,sum[i][j]);
		}
	}
	
	
	
	getch();
}
