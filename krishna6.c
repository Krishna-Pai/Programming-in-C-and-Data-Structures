#include<stdio.h>
main()
{
    float sec, min,hours;
    printf("Enter seconds:");
    scanf("%f",&sec);
    min=(sec/60);
    hours=(min/60);
    printf("Minutes:%f\nHour:%f",min,hours);
}
