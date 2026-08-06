#include<stdio.h>

int main()
{
    int a[10];
    int i, j, temp;
    int max, min;
    float sum = 0, mean;

    printf("Enter 10 integers:\n");

    // Input
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }

    // Find Min, Max and Sum
    max = a[0];
    min = a[0];

    for(i=0; i<10; i++)
    {
        if(a[i] > max)
            max = a[i];

        if(a[i] < min)
            min = a[i];

        sum += a[i];
    }

    // Mean
    mean = sum / 10;

    // Sort Ascending
    for(i=0; i<9; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Output
    printf("\nSorted Array:\n");
    for(i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n\nMinimum = %d", min);
    printf("\nMaximum = %d", max);
    printf("\nMean = %.2f\n", mean);

    // Check Mean Position
    if((mean - min) < (max - mean))
        printf("Mean is closer to Minimum.\n");
    else if((mean - min) > (max - mean))
        printf("Mean is closer to Maximum.\n");
    else
        printf("Mean is exactly midway between Minimum and Maximum.\n");

    return 0;
}
