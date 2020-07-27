#include<stdio.h>
main()
{
    char str1[50];
    char str2[50];
    int i;
    printf("Enter a string for str1: ");
    gets(str1);
    for (i=0;str1[i]!='\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i]='\0';
    printf("The string is copied to str2: ");
    puts(str2);
}
