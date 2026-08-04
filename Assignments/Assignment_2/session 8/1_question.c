#include<stdio.h>

int getuserInitials(int name){
	
	if(name == 1){
		printf("VK");
	}
	else if(name == 2){
		printf("7 for a Reason");
	}
	else if(name == 3){
		printf("Gujrati bapu");
	}
	else{
		printf("Invalid Choise");
	}
	
	return name;
}



int main(){
	
	int name;
	
	printf("1. Virat Kohli\n");
	printf("2. Dhoni\n");
	printf("3. Bapu\n");
	
	printf("enter YourChoice:");
	scanf("%d",&name);
	
	getuserInitials(name);
	
	return 0;
}
