#include<stdio.h>

int main(){
	int n;
	
	printf("enter a number:");
	scanf("%d",&n);
	
	printf("This is factorial num :%d",fac(n));
	
	
	return 0;
}

int fac(int n){
	
	int i,f = 1;
	
	for(i = 1;i<= n;i++){
		f = f*i;
	}
	
	return f;
}
