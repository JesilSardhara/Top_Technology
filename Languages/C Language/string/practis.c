#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
	
	char name1[20],name2[20];
	int comp,data;
	
	printf("enter a first value :");
	gets(name1);
	
//	printf("enter a second value :");
//	gets(name2);
//	
//	comp = strcmp(name1,name2);
//	
//	if(comp == 0){
//		printf(" same values");
//	}
//	else{
//		printf("not same value");
//	}
	
//	strcat(name1,name2);
//	
//	printf("\nName Concet String : %s",name1);


	data = strlen(name1);
	printf("lenth is :%d",data);
	
	
	getch();
}
