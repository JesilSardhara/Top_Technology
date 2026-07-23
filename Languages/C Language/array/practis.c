#include<stdio.h>

void main(){

	int i,a[4],temp,j ;
	
	for(i=0;i<=4;i++){
		printf("enter a value :");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<=4;i++){
		printf("a[%d] : %d\ns",i,a[i]);
	}
//	for(i=4;i>=0;i--){
//		printf("a[%d]:%d\n",i,a[i]);
//	}
	
	for(i=0;i<=4;i++){
		for(j=0;j<=4;j++){
			if(a[i] > a[j]){
				temp =a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\n\n");
	
	for(i=0;i<=4;i++){
		printf("a[%d] : %d\ns",i,a[i]);
	}
	
	getch();
}
