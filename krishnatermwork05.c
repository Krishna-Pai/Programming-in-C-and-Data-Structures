#include<stdio.h>
main()
{
    int a[10];
    int i,j,n,temp;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nArray elements before sorting:");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }


    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nArray elements after sorting:");
        for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}
