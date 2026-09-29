#include<stdio.h>

int main(){
	
	int i,a[5],j,temp;
	
	for(i=0;i<=4;i++){
		printf("enter a value of a[i]:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++){
		printf("this is a[%d]your value:%d\n",i,a[i]);
	}
	
	for(i=0;i<=4;i++){
		for(j=i+1;j<=4;j++){
			if(a[i]>a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}	
		}
	}
	
	printf("\n\n");
	
	for(i=0;i<=4;i++){
		printf("this is a[%d]your value:%d\n",i,a[i]);
	}
	
	
	for(i=0;i<=4;i++){
		for(j=i+1;j<=4;j++){
			if(a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}	
		}
	}
	
	printf("\n\n");
	
	for(i=0;i<=4;i++){
		printf("this is a[%d]your value:%d\n",i,a[i]);
	}
	
	return 0;
}
