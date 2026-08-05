#include<stdio.h>

int main()
{
    int orders[5] = {250, 180, 320, 150, 400};
    int *ptr = orders;
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Amount = %d\tAddress = %p\n", *ptr, ptr);
        ptr++;
    }

    return 0;
}
