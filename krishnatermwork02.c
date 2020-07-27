#include<stdio.h>
main()
{
    int num,digit,rev=0,temp;

    printf("Enter a integer number:");
    scanf("%d",&num);
    temp=num;

    while(num!=0)
    {
        digit=num % 10;
        rev=rev * 10 + digit;
        num= num/10;
    }
    printf("\nReversed number is %d",rev);

    if(rev==temp)
    {
        printf("\nGiven number is palindrome");
    }
    else
    {
        printf("\nGiven number is not palindrome");
    }
}
