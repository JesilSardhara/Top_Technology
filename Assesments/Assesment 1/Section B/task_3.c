#include<stdio.h>

struct Student
{
    char name[30];
    int rollno;
    float marks;
    char grade;
};

char assignGrade(float marks)
{
    if(marks>=90)
        return 'A';
    else if(marks>=75)
        return 'B';
    else if(marks>=60)
        return 'C';
    else if(marks>=45)
        return 'D';
    else
        return 'F';
}

void printTopper(struct Student s[],int n)
{
    int i,top=0;

    for(i=1;i<n;i++)
    {
        if(s[i].marks>s[top].marks)
            top=i;
    }

    printf("\nTopper Details");
    printf("\nName : %s",s[top].name);
    printf("\nMarks: %.2f",s[top].marks);
}

int main()
{
    struct Student s[3];
    int i;

    for(i=0;i<3;i++)
    {
        printf("\nStudent %d\n",i+1);

        printf("Enter Name: ");
        scanf("%s",s[i].name);

        printf("Enter Roll No: ");
        scanf("%d",&s[i].rollno);

        printf("Enter Marks: ");
        scanf("%f",&s[i].marks);

        s[i].grade = assignGrade(s[i].marks);
    }

    printf("\n---------------------------------------------");
    printf("\nName\tRollNo\tMarks\tGrade");
    printf("\n---------------------------------------------");

    for(i=0;i<3;i++)
    {
        printf("\n%s\t%d\t%.2f\t%c",s[i].name,s[i].rollno,s[i].marks,s[i].grade);
    }

    printTopper(s,3);

    return 0;
}
