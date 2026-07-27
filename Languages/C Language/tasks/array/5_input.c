#include<stdio.h>

int main(){
	
	int a[5],i;
	
	for(i=0;i<=4;i++){
		printf("enter a of values  : ");
		scanf("%d",&a[i]);
	}
	
		for(i=0;i<=4;i++){
			printf("arry is a[%d]: %d\n",i,a[i]);
		}
	
	return 0;
}
