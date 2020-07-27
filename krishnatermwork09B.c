#include<stdio.h>
#include<string.h>
main()
{
    char name[50];
    char ch;
    int j,a=0,e=0,i=0,o=0,u=0,con=0;
    printf("Enter a string: ");
    gets(name);
    strlwr(name);
    for(j=0;j<strlen(name);j++)
    {
        ch=name[j];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch==' ')
     ||ch==' '   {
            if(ch=='a')
            {
                a++;
            }
            if(ch=='e')
            {
                e++;
            }
            if(ch=='i')
            {
                i++;
            }
            if(ch=='o')
            {
                o++;
            }
            if(ch=='u')
            {
                u++;
            }
        }
        else
        {
            con++;
        }
    }
    printf("\na=%d\ne=%d\ni=%d\no=%d\nu=%d\ncon=%d",a,e,i,o,u,con);
}
