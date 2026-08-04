#include<stdio.h>


int average(int order[]){
	
	int i,sum = 0,total;
	
	for(i=0;i<7;i++){
		sum = sum+ order[i];
	}
	
	total = sum/7;
	printf("average is:%d",total);
}



int main(){
	
	int order[7] = {10,20,30,40,50,60,70};
 
	average(order);
	
	
	
	return 0;
}
