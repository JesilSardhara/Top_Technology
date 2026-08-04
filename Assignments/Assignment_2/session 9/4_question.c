#include <stdio.h>

int main()
{
    int cricketScores[3][2] = {
        {180, 175},
        {210, 195},
        {165, 185}
    };

    int i, j, max;

    for(i = 0; i < 3; i++)
    {
        max = cricketScores[i][0];

        for(j = 1; j < 2; j++)
        {
            if(cricketScores[i][j] > max)
            {
                max = cricketScores[i][j];
            }
        }

        printf("Highest Score of Match %d = %d\n", i + 1, max);
    }

    return 0;
}
