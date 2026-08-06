#include<stdio.h>
#include<string.h>

struct StudyLog
{
    char subject[40];
    float hours[7];
};

void logHours(struct StudyLog s[], int n);
void weeklyReport(struct StudyLog s[], int n);
void saveFile(struct StudyLog s[], int n);

int main()
{
    struct StudyLog s[3] =
    {
        {"Math",{0}},
        {"Science",{0}},
        {"English",{0}}
    };

    int choice;

    while(1)
    {
        printf("\n===== Student Productivity Tracker =====\n");
        printf("1. Log Today's Study Hours\n");
        printf("2. View Weekly Report\n");
        printf("3. Save & Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                logHours(s,3);
                break;

            case 2:
                weeklyReport(s,3);
                break;

            case 3:
                saveFile(s,3);
                printf("\nData Saved Successfully.\n");
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}

void logHours(struct StudyLog s[], int n)
{
    int day,i;

    printf("\nEnter Day (1-7): ");
    scanf("%d",&day);

    if(day<1 || day>7)
    {
        printf("Invalid Day!\n");
        return;
    }

    for(i=0;i<n;i++)
    {
        printf("Enter hours for %s : ",s[i].subject);
        scanf("%f",&s[i].hours[day-1]);
    }
}

void weeklyReport(struct StudyLog s[], int n)
{
    int i,j,k;
    float total,avg;

    printf("\n========== Weekly Report ==========\n");

    for(i=0;i<n;i++)
    {
        total=0;

        for(j=0;j<7;j++)
        {
            total=total+s[i].hours[j];
        }

        avg=total/7;

        printf("\nSubject : %s",s[i].subject);
        printf("\nTotal Hours : %.2f",total);
        printf("\nAverage Hours : %.2f\n",avg);

        printf("Progress Chart:\n");

        for(j=0;j<7;j++)
        {
            printf("Day %d : ",j+1);

            for(k=0;k<(int)s[i].hours[j];k++)
            {
                printf("*");
            }

            printf(" (%.1f hrs)\n",s[i].hours[j]);
        }
    }
}

void saveFile(struct StudyLog s[], int n)
{
    FILE *fp;
    int i,j;

    fp=fopen("productivity_log.txt","w");

    if(fp==NULL)
    {
        printf("File Error!\n");
        return;
    }

    for(i=0;i<n;i++)
    {
        fprintf(fp,"%s",s[i].subject);

        for(j=0;j<7;j++)
        {
            fprintf(fp,",%.1f",s[i].hours[j]);
        }

        fprintf(fp,"\n");
    }

    fclose(fp);
}
