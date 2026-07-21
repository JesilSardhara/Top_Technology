#include<stdio.h>

int main(){
	
	int r,c,k,i,m,n;
	
	for(r=1;r<=5;r++){
		for(k=5;k>=r;k--){
			printf(" ");
		}
		for(c=1;c<=r;c++){
			printf(" *");
		}
		printf("\n");
	}
	for(i=1;i<=5;i++){			// daimand
		for(n=1;n<=i;n++){
			printf(" ");
		}
		for(m=5;m>=i;m--){
			printf(" *");
		}
		printf("\n");
	}
	
	return 0;
}
