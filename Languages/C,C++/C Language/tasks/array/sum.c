#include<stdio.h>

int main(){
	
	int a[5],i;
	int sum = 0;
	
	for(i=0;i<=4;i++){
		printf("enter a of values  : ");
		scanf("%d",&a[i]);
	}
	
		for(i=0;i<=4;i++){
			sum = sum + a[i];
		}
					printf("sum of arry is : %d\n",sum);

	
	return 0;
}
