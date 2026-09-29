/*
	
	5+4+3+2+1+0 = 15
	
	Factorial : 5*4*3*2*1 = 120

*/
#include<stdio.h>
#include<conio.h>


void main()
{
	int n;
	printf("Enter your num : ");
	scanf("%d",&n);
	
	printf("\nTotal Sum : %d",total(n));
	
	getch();
}

int total(int n){
	int i,sum = 1  ;
	for(i=1;i<=n;i++){
		sum = sum * i;
	}
	return sum;
	
}
