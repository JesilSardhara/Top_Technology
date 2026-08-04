#include<stdio.h>

int increaseFollowersByValue(int followers){
	
	int buyvalue;
	
	buyvalue = followers + 1000;
	printf("\nfollowers By Values :%d",buyvalue);
	printf("\nOrignal Followers :%d",followers);
	
	return 0;
}

int increaseFollowersByReference(int followers){
	
	int byrefrence;
	
	byrefrence = followers + 1000;
	printf("\nfollowers By refrence :%d",byrefrence);
	
	return 0;
}

int main(){
	
	int followers = 5000;
	
	printf("Orignal Followers :%d",followers);
	
	increaseFollowersByValue(followers);
	increaseFollowersByReference(followers);
	
	return 0;
}
