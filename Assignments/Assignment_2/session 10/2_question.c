#include<stdio.h>
#include<string.h>

int main(){
	
	char a[10],b[10];
	
	printf("enter first name :");
	scanf("%s",&a);
	printf("enter second name :");
	scanf("%s",&b);
	
	if(strcmp(a, b)==0){
		printf("Both usernames are same");
	}
	else{
		printf("Both usernames are different");
	}
	 	
	return 0;
}
