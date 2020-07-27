#include<stdio.h>
#include<math.h>
main()
{
    int n=3,i;
    float x,sum,t;
    printf("Enter the value of x:\n");
    scanf("%f",&x);
    x=x*(3.142/180);
    printf("Built in function value:%f",sin(x));
    t=x;
    sum=x;
    for(i=1;i<=n;i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sum=sum+t;
    }
    printf("\nTaylor series value:%f",sum);
}

