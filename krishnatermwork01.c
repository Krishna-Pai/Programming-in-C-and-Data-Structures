#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c,root1, root2,realp,imgp,d;
    printf("Enter the 3 co-efficients:\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    {
        printf("Invalid input\n");
        exit(0);
    }
    d=(b*b)-(4*a*c);
    printf("Discriminant value is:%f\n",d);
    if(d==0)
    {
    printf("\n Roots are equal");
    root1=root2=-b/(2*a);
    printf("\nroot1 =%f",root1);
    printf("\nroot2 =%f",root2);
    }
    else if(d>0)
    {
    printf("\n Roots are real and distinct");
    root1=(-b+sqrt(d))/(2*a);
    root2=(-b-sqrt(d))/(2*a);
    printf("\n root1 =%f",root1);
    printf("\n root2 =%f",root2);
    }
    else
    {
     printf("\n Roots are complex");
    realp=-b/(2*a);
    imgp=(sqrt(fabs(d)))/(2*a);
    printf("\n %f+i %f",realp,imgp);
    printf("\n %f-i %f",realp,imgp);
    }
}
