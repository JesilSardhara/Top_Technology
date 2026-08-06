#include<stdio.h>

int main()
{
    FILE *fp;
    int day, minutes;
    int total = 0, highest = 0;
    float average;

    fp = fopen("music_log.txt", "r");

    if(fp == NULL)
    {
        printf("File not found!");
        return 0;
    }

    while(fscanf(fp, "Day %d : %d minutes", &day, &minutes) == 2)
    {
        total += minutes;

        if(minutes > highest)
        {
            highest = minutes;
        }
    }

    fclose(fp);

    average = total / 7.0;

    printf("\n===== Weekly Report =====\n");
    printf("Total Minutes   : %d\n", total);
    printf("Average Minutes : %.2f\n", average);
    printf("Highest Minutes : %d\n", highest);

    return 0;
}
