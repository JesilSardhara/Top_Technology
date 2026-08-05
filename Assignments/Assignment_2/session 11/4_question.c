#include<stdio.h>

void incrementFollowers(int *followers, int n){
	
	int i;
	
	for(i = 0; i < n; i++)
    {
        *(followers + i) += 100;
    }
	
	getch();
}


int main(){
	
	int followers[5] = {1000, 1500, 2000, 2500, 3000};
    int i;

    incrementFollowers(followers, 5);

    for(i = 0; i < 5; i++)
    {
        printf("%d\n", followers[i]);
    }

	
	return 0;
}
