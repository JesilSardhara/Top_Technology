#include<stdio.h>
#include<conio.h>

int main()
{
	FILE *file = fopen("test.txt","w");
	
//	file null 
	
	if(file == NULL){
		printf("Error Opeing file\n");
		return 1;
	}
	
//	file new entery
	fprintf(file,"Hello this demo file\n");
	fprintf(file,"this is my file\n");
	fprintf(file,"this is my write file to writing..");

	fclose(file);
	
	printf("File data successfully printed..");
	
	return 0;
}
