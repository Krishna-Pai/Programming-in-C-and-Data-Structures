#include<stdio.h>
main()
{
    int a[10];
    int n,i,x,sum=0;
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("Enter the coefficient elements:\n");
    for(i=0; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the values of x:");
    scanf("%d",&x);

    for(i=n;i>0;i--)
    {
        sum=sum+a[i]*pow(x,i);
    }
        sum=sum+a[0];
        printf("The answer is %d\n",sum);
}
