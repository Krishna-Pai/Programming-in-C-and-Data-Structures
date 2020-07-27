#include<stdio.h>
struct student
{
    char name[50];
    char grade;
    int rollno, marks;
}stud[100];
main()
{
    int i,n, found=0;
    char sname[50];
    struct student s[10];
    printf("Enter the number of students:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n\nEnter the roll number:");
        scanf("%d",&s[i].rollno);
        printf("Enter the name without white spaces:");
        scanf("%s",&s[i].name);
        printf("Enter the marks:");
        scanf("%d",&s[i].marks);
        printf("Enter the grade:");
        fflush(stdin);
        scanf("%c",&s[i].grade);
    }
    printf("\nStudent details are \n");
    printf("\tRollno\tName\tMarks\tGrade\n");

    for(i=1;i<=n;i++)
    {
        printf("\t%d\t%s\t%d\t%c\n", s[i].rollno, s[i].name, s[i].marks, s[i].grade);
    }
    printf("\nEnter the student name to print the marks:");
    scanf("%s",sname);
    for(i=1;i<=n;i++)
    {
        if(strcmp(s[i].name,sname)==0)
        {
            printf("\nMarks of the students is:%d\n",s[i].marks);
            found=1;
        }
    }
    if (found==0)
        {
            printf("Given student name not found\n");
        }
}
