#include<stdio.h>>
unsigned int rightshift(unsigned int,unsigned int);
void main()
{
    unsigned int x,x1,n;
    printf("\nEnter the value of x(unsigned integer only):");
    scanf("%u",&x);
    printf("\nEnter the no of bits x will rotate right(n):");
    scanf("%u",&n);
    x1=rightshift(x,n);
    printf("\n\nAfter rotating %u bits to right,%u becomes %u\n",n,x,x1);
}
unsigned int rightshift(unsigned int x,unsigned int n)
{
    unsigned int a,b,y;
    a=x>>n;
    b=x<<(32-n);
    y=a|b;
    return(y);
}
