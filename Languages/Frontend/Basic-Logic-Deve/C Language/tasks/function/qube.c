#include<stdio.h>

int main(){
	int a;
	printf("enter a number:");
	scanf("%d",&a);	
	
	hlw(a);
	
	return 0;
}

int hlw(a){
	int qube;
	qube = a*a*a;
	
	printf("multi is :%d",qube);
	
	return 0;
}
