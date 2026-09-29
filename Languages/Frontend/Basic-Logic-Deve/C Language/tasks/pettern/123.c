#include<stdio.h>

int main(){
	
	int r,c,k;
	int ch = 1;
	
	for(r=5;r>=1;r--){
		for (c=0;c<r;c++){
			printf("%d",1+c);
		}
		printf("\n");
	}
	
	return 0;
}
