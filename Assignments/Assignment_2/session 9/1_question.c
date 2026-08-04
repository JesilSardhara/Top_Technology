#include<stdio.h>

int main(){
	
	int j[7],i;
	
	for(i=0;i<7;i++){
		printf("enter a i values :");
		scanf("%d",&j[i]);
	}
	
	for(i=0;i<7;i++){
		printf("values of j[%d] :%d\n",i,j[i]);
	}
	
	
	
	return 0;
}
