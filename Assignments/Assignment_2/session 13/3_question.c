#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("playlist.txt", "a");

    fprintf(fp, "I am The King\n");
    fprintf(fp, "Dark Side\n");

    fclose(fp);

    printf("Songs added successfully.");

    return 0;
}
