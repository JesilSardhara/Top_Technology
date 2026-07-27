#include<stdio.h>
#include<conio.h>

int main()
{
	FILE *file = fopen("demo.txt","w");
	
//	file null 
	
	if(file == NULL){
		printf("Error Opeing file\n");
		return 1;
	}
	
//	file new entery
	fprintf(file,"Hello this demo file");
	fclose(file);
	
	printf("File data successfully printed..");
	
	return 0;
}
