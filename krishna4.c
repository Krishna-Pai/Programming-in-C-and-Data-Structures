#include<stdio.h>
main()
{
    int a,b,c;
    float avg;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    avg=((a+b+c)/3);
    printf("Average of the three number is:%f",avg);
}
