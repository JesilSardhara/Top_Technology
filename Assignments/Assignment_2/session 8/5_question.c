#include<stdio.h>
#include <ctype.h> // <- this is recomended by chatgpt

void recapatal(char a[]){
	
	a[0] = toupper(a[0]); // my logic only sir 
    printf("%s", a); 	 

}

int main(){
	char a[20];

	printf("enter a string name:");
	scanf("%s",a);
	
	recapatal(a);
	
	return 0;
}
