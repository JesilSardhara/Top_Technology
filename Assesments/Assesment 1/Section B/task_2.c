#include<stdio.h>

int main()
{
    float hours[7];
    float total = 0, average;
    float max;
    int i, day = 1;

    for(i=0;i<7;i++)
    {
        do
        {
            printf("Enter study hours for Day %d: ",i+1);
            scanf("%f",&hours[i]);

            if(hours[i] < 0 || hours[i] > 24)
                printf("Invalid! Enter between 0 and 24.\n");

        }while(hours[i] < 0 || hours[i] > 24);

        total = total + hours[i];
    }

    max = hours[0];

    for(i=1;i<7;i++)
    {
        if(hours[i] > max)
        {
            max = hours[i];
            day = i + 1;
        }
    }

    average = total / 7;

    printf("\nTotal Hours = %.2f",total);
    printf("\nAverage Hours = %.2f",average);
    printf("\nHighest Study Hours = %.2f on Day %d",max,day);

    return 0;
}
