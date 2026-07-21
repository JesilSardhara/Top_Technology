/*
	
	5+4+3+2+1+0 = 15
	
	Factorial : 5*4*3*2*1 = 120

*/
#include<stdio.h>
#include<conio.h>

int total(int n){
	int i,sum = 0;
	for(i=1;i<=n;i++){
		sum = sum + i;
	}
	return sum;
	
}

void main()
{
	int num;
	printf("Enter your num : ");
	scanf("%d",&num);
	
	printf("Num of value : %d",num);
	printf("\nTotal Sum : %d",total(num));
	
	getch();
}
