#include<string.h>
#include<stdlib.h>
void main()
{
    int n,i,mid,low,high;
    char name[100][100];
    char key[100];

    printf("Enter the size of the array:");
    scanf("%d",&n);

    printf("\nEnter %d names in alphabetical order:",n);
    for(i=0;i<n;i++)
    {
    printf("\n\n name [%d]:",i);
    scanf("%s",name[i]);
    }
    printf("\n\nEnter the name to be searched:");
    scanf("%s",key);

    low=0;
    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(strcmp(key,name[mid])==0)
           break;
           else if (strcmp(key,name[mid])>0)
            low=mid+1;
        else
            high=mid-1;
    }
        if(strcmp(key,name[mid])==0)
            printf("\n\n Search successful:%s found",key);
            else
                printf("\n\n Search unsuccessful:%s not found",key);
}
