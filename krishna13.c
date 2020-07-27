#include<stdio.h>
main()
{
    float per;
    printf("Enter your percentage:");
    scanf("%f",&per);
    if(per>=90)
    {
        printf("Your grade is A");
    }
        else if(per<90&& per>=80)
    {
        printf("Your grade is B");
    }
        else if(per<80&& per>=70)
    {
        printf("Your grade is C");
    }
        else if(per<70&& per>=60)
    {
        printf("Your grade is D");
    }
        else if(per<60&& per>=50)
    {
        printf("Your grade is E");
    }
        else if(per<50&& per>=40)
    {
        printf("Your grade is F");
    }
        else
    {
        printf("Your grade is Fail");
    }
}

