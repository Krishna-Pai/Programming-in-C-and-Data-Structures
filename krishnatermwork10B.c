#include<stdio.h>
int isprime(int num);
main()
{
    int num, res,n,m,f=0;
    printf("Enter the min and max range:\n ");
    scanf("%d%d",&n,&m);

    for(num=n;num<=m;num++)
    {
    res=isprime(num);
        if(res==1)
            {
                printf("%d\t", num);
                f=1;
            }
    }
    if(f==0)
    {
        printf("No prime number in the range");
    }
}
int isprime(int num)
{
    int i;
    for(i=2;i<=(num/2);i++)
    {
        if(num%i==0)
            {
                return 0;
                break;
            }

    }
                return 1;
}


