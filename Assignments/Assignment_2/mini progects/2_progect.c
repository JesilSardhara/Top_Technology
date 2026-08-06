#include<stdio.h>

int main()
{
    int music[7];
    int i, choice;

    do
    {
        printf("\n===== Music Listening Logger =====\n");
        printf("1. Log Music Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter music listening minutes for 7 days:\n");
                for(i=0; i<7; i++)
                {
                    printf("Day %d: ", i+1);
                    scanf("%d", &music[i]);
                }
                break;

            case 2:
                printf("\nWeekly Music Summary:\n");
                for(i=0; i<7; i++)
                {
                    printf("Day %d : %d minutes\n", i+1, music[i]);
                }
                break;

            case 3:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}
