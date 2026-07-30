#include<stdio.h>
#include<conio.h>

int main(){
	
	int followerCount =100;
	
	 printf("Initial i = %d\n", followerCount);


    printf("\nUsing Pre-Increment (++i)\n");
    printf("Value = %d\n", ++followerCount);

    
    followerCount = 100;
    printf("\nUsing Post-Increment (i++)\n");
    printf("Value = %d\n", followerCount++);
    printf("Value = %d\n", followerCount++);
    
    

	return 0;
}
