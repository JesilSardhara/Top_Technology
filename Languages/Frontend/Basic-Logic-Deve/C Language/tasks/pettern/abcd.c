#include<stdio.h>

int main(){
	
	int r,c,k;
	char ch = 'A';
	
	for(r=1;r<=5;r++){
		for (c=0;c<r;c++){
			printf("%c",'A'+c);
		}
		printf("\n");
	}
	
	return 0;
}
