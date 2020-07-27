#include<stdio.h>
int fact(int n);
int bc(int n,int r);
main()
{
    int n,r;
    printf("Enter the value of 'n' and 'r':\n");
    scanf("%d%d",&n, &r);
    printf("\nFactorial value: %d",fact(n));
    printf("\nBinomial coefficient: %d",bc(n,r));
}
int fact(int n)
{
    if(n==0)
       {
            return 1;
       }
    else
        {
            return n*fact(n-1);
        }
}
int bc(int n,int r)
{
    return (fact(n)/(fact(r)*fact(n-r)));
}
