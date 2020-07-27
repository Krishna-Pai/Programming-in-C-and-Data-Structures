#include<stdio.h>
main()
{
    int num1=10;
    int num2=20,res;
    int *p1,*p2;
    p1=&num1;
    p2=&num2;
    res=*p1+*p2;
    printf("%d",res);
}
