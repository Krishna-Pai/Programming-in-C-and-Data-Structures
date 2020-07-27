#include<stdio.h>
main()
{
    int a,b,q,r;
    printf("Enter the dividend and divider:");
    scanf("%d%d",&a,&b);
    q=(a/b);
    r=(a%b);
    printf("Quotient:%d\n",q);
    printf("Remainder:%d",r);
}
