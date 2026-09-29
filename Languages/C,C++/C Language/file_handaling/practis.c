#include<stdio.h>
#include<conio.h>

int main(){
	
	FILE*file = fopen("write.txt","w");
	
	if(file == NULL){
		printf("aama kaik lakh\n");
		return 1;
	}
	
	fprintf(file,"hello bacho \n khelo bacho\nlelo bacho");
	fclose(file);
	
	printf("data Successfully printed");
	
	return 0;
}
