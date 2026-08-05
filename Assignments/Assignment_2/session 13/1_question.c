#include<stdio.h>

int main(){
	
	FILE *fp;

    fp = fopen("playlist.txt", "w");

    fprintf(fp, "love story\n");
    fprintf(fp, "billie eilish\n");
    fprintf(fp, "safari\n");

    fclose(fp);

    printf("Data written successfully.");

	
	return 0;
}
