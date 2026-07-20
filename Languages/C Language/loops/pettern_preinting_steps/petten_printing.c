#include<stdio.h>

int main(){
	
	int c,r;
	
	for(r=1;r<=3;r++){                  // ubhi line
		for(c=1;c<=4;c++){             // aadi line
			printf("*");					//fist step
		}
		printf("\n");
	}

	for(r=1; r<=5; r++){
		for(c=1;c<=r;c++){					//second step
			printf("*");
		}	
		printf("\n");
	}


	for(r=1; r<=5; r++){
		for(c=5;c>=r;c--){
			printf("*");					//third step
		}	
		printf("\n");
	}
		
	return 0;
}
