#include<stdio.h>

int main(){
	int like =100;
	int *ptrlike = &like;
	
	printf( "Value of likes: %d " ,*ptrlike);
    printf("\nAddress stored in ptrLikes: %d ",ptrlike);
	
	return 0;
}
