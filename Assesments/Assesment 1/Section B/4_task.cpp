#include<stdio.h>

struct Expense
{
    char category[30];
    float amount;
};

int main()
{
    struct Expense e[10];
    int choice;
    int count=0;
    int i;
    float total=0;
    FILE *fp;

    do
    {
        printf("\n\n===== Expense Logger =====");
        printf("\n1. Add Expense");
        printf("\n2. View Expenses");
        printf("\n3. Save & Exit");
        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                if(count<10)
                {
                    printf("Enter Category: ");
                    scanf("%s",e[count].category);

                    printf("Enter Amount: ");
                    scanf("%f",&e[count].amount);

                    count++;
                }
                else
                {
                    printf("Maximum 10 records allowed.");
                }

                break;

            case 2:

                total=0;

                printf("\nCategory\tAmount\n");

                for(i=0;i<count;i++)
                {
                    printf("%s\t\t%.2f\n",e[i].category,e[i].amount);
                    total += e[i].amount;
                }

                printf("\nTotal Expense = %.2f\n",total);

                break;

            case 3:

                fp=fopen("expenses.txt","w");

                for(i=0;i<count;i++)
                {
                    fprintf(fp,"%s,%.2f\n",e[i].category,e[i].amount);
                }

                fclose(fp);

                printf("Data Saved Successfully.");

                break;

            default:
                printf("Invalid Choice.");
        }

    }while(choice!=3);

    return 0;
}
