#include<stdio.h>

void main(){
	
	int n;	

	printf("enter a number:");
	scanf("%d",&n);
	
	printf("factorial number:%d",top(n));
	
	getch();
}

int top(int n){
	int i,sum =1;
	
	for(i=1;i<=n;i++){
		sum=sum*i;
	}
	return sum;
	
}
