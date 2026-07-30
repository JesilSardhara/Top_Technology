#include<stdio.h>
#include<conio.h>

int main(){
	
	int like,comment,share;
	
	printf("enter you post's like:");
	scanf("%d",&like);
	
	printf("enter you post's comment");
	scanf("%d",&comment);
	
	printf("enter you post's share:");
	scanf("%d",&share);
	
	if(like>=1000 || comment>200 && share>=50){
		printf("your post is trending...");
	}
	else{
		printf("your post is not trending");
	}
	
	return 0;
}
