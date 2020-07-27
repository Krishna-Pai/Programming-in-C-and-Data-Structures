#include<stdio.h>
main()
{
    int x,y;
    int result;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    result=(x>y)?x:y;
    printf("The largest number is:%d",result);
}
