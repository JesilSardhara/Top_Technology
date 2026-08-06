#include<stdio.h>

int main()
{
    int music[7] = {0};
    int i, choice;
    int total, highest;
    float average;
    char ch;
    FILE *fp;

    do
    {
        printf("\n===== Music Listening Logger =====\n");
        printf("1. Log Music Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. Weekly Report\n");
        printf("4. Reset Weekly Data\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                fp = fopen("music_log.txt","w");

                printf("\nEnter music listening minutes for 7 days:\n");

                for(i=0;i<7;i++)
                {
                    printf("Day %d: ",i+1);
                    scanf("%d",&music[i]);

                    fprintf(fp,"Day %d : %d minutes\n",i+1,music[i]);
                }

                fclose(fp);
                printf("Data saved successfully.\n");
                break;

            case 2:
                printf("\nWeekly Summary\n");

                for(i=0;i<7;i++)
                {
                    printf("Day %d : %d minutes\n",i+1,music[i]);
                }
                break;

            case 3:
                fp = fopen("music_log.txt","r");

                if(fp == NULL)
                {
                    printf("File not found!\n");
                    break;
                }

                total = 0;
                highest = 0;

                while(fscanf(fp,"Day %*d : %d minutes",&i) == 1)
                {
                    total += i;

                    if(i > highest)
                    {
                        highest = i;
                    }
                }

                fclose(fp);

                average = total / 7.0;

                printf("\n===== Weekly Report =====\n");
                printf("Total Minutes   : %d\n",total);
                printf("Average Minutes : %.2f\n",average);
                printf("Highest Minutes : %d\n",highest);

                break;

            case 4:
                printf("Are you sure? (Y/N): ");
                scanf(" %c",&ch);

                if(ch=='Y' || ch=='y')
                {
                    for(i=0;i<7;i++)
                    {
                        music[i]=0;
                    }

                    fp = fopen("music_log.txt","w");
                    fclose(fp);

                    printf("Weekly data reset successfully.\n");
                }
                else
                {
                    printf("Reset cancelled.\n");
                }

                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    }while(choice!=5);

    return 0;
}
