#include<stdio.h>

int main(){
	int a;
	printf("enter a number:");
	scanf("%d",&a);	
	
	hlw(a);
	
	return 0;
}

int hlw(a){
	int square;
	square = a*a;
	
	printf("multi is :%d",square);
	
	return 0;
}
