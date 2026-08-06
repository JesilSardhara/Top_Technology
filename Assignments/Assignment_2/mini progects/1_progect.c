#include<stdio.h>

int main(){
	
	int music[7] = {45,48,20,90,50,10,30};
	int i;
		
	for(i=0;i<7;i++){
		printf("day %d : %d minit\n",i+1,music[i]);
	}
	
	return 0;	
}
