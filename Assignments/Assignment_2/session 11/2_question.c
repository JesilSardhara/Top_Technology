#include<stdio.h>

void swapPlaylistCounts(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int playlist1;
    int playlist2;

    printf("Before Swap:\n");
    printf("Playlist1 = ", playlist1);
    scanf("%d",&playlist1);
    printf("Playlist2 = ");
    scanf("%d",&playlist2);


    swapPlaylistCounts(&playlist1, &playlist2);

    printf("\nAfter Swap:\n");
    printf("Playlist1 = %d\n", playlist1);
    printf("Playlist2 = %d\n", playlist2);

    return 0;
}
