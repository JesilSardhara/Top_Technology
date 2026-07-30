#include<stdio.h>
#include<conio.h>

int main(){
	
	int a[5],i,sum =0;
	
	for(i=0;i<=4;i++){
		printf("enter a value:");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<=4;i++){
		printf("this is a[%d] : %d\n",i,a[i]);
	}
	
	for(i=0;i<=4;i++){
		sum =sum+a[i];
	}
	printf("\n\n\n\n\n");
	printf("sum is :%d",sum);
	
	return 0;
}
