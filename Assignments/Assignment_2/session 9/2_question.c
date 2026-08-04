#include<stdio.h>

int main()
{
    int playlistRatings[3][5] = {
        {5, 4, 5, 3, 4},
        {3, 5, 4, 5, 5},
        {4, 4, 3, 5, 4}
    };

    int i;

    printf("Ratings of Second Playlist:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", playlistRatings[1][i]);
    }

    return 0;
}
