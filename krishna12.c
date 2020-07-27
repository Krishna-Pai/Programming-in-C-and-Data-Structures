#include<stdio.h>
main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Number is +ve");
    }
    else if(num<0)
    {
        printf("Number is -ve");
    }
    else
    {
        printf("Number is 0");
    }
}
