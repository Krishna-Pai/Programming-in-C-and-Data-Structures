#include<stdio.h>
main()
{
    int no1, no2;
    printf("Enter two number:");
    scanf("%d%d",&no1,&no2);
    if(no1>no2)
    {
        printf("Max number is no1");
    }
    if(no1<no2)
    {
        printf("Max number is no2");
    }
}
