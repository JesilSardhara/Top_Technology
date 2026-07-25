#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,j,sum = 0;
	
	for(i=0;i<=4;i++){
		printf("enter a value %d:",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<=4;i++){
		printf("enter a value a[%d] is :%d\n",i,a[i]);
	}
	
	printf("\n\n");
	
	for(i=0;i<=4;i++){
		sum = sum + a[i];
	}
	
	printf("sum a[i] is : %d",sum);
	
	getch();
}
