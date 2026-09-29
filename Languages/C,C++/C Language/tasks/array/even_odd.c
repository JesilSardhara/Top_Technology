#include<stdio.h>

int main(){
	
	int a[5],i;
	
	for(i=0;i<=4;i++){
		printf("enter a of values  : ");
		scanf("%d",&a[i]);
	}
	
		for(i=0;i<=4;i++){
			if(a[i] % 2 == 0){
				printf("arry is even : %d\n",a[i]);
			}
			else{
				printf("arry is odd : %d\n",a[i]);
			}
		}
	
	return 0;
}
