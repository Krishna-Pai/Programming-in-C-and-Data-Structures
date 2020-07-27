#include<stdio.h>
main()
{
    int a,b,c,d;
    printf("Enter 3 number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==0)
    {
        pr
    d=b*b-4*a*c;
    printf("The answer is:%d\n",d);
    if(d>0)
    {
    printf("Roots are real and distinct");
    }
    else if(d<0)
    {
    printf("Roots are complex");
    }
    else
    {
    printf("Roots are equal");
    }
}
