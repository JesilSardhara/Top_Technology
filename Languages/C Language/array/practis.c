#include<stdio.h>

void main(){

	int i,a[4] ;
	
	for(i=0;i<=4;i++){
		printf("enter a value :");
		scanf("%d",&a[i]);
	}
	
//	for(i=0;i<=4;i++){
//		printf("a[%d] : %d\ns",i,a[i]);
//	}
	for(i=4;i>=0;i--){
		printf("a[%d]:%d\n",i,a[i]);
	}
	
	getch();
}
