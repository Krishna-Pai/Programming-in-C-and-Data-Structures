#include<stdio.h>
void main()
{
    int A[5][5],B[5][5],C[5][5];
    int m,n,p,q,i,j,k;
    printf("\n\nEnter the order of matrix A(m and n):\n");
    scanf("%d%d",&m,&n);
    printf("\n\nEnter the order of matrix B(p and q):\n");
    scanf("%d%d",&p,&q);

    if(n!=p)
    {
        printf("Matrix multiplication is not possible... Try again");
        exit(0);
    }
    printf("\n\nEnter the elements of matrix A(m and n):\n");
    {
        for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            {
                scanf("%d",&A[i][j]);
            }
    }
    printf("\n\nEnter the elements of matrix B(p and q):\n");
    {
        for(i=0;i<p;i++)
        for(j=0;j<q;j++)
            {
                scanf("%d",&B[i][j]);
            }
    }
    for(i=0;i<m;i++)
        for(j=0;j<q;j++)
        {
            C[i][j]=0;
            for(k=0;k<n;k++)
            {
                C[i][j]=C[i][j] +A[i][k]*B[k][j];
            }
        }

    printf("\n\nElements of matrix A(m * n)...\n");
    {
        for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
            {
                printf("%4d",A[i][j]);
            }
            printf("\n");
        }
    }
     printf("\n\nElements of matrix B(p * q)...\n");
    {
        for(i=0;i<p;i++)
        {
        for(j=0;j<q;j++)
            {
                printf("%4d",B[i][j]);
            }
            printf("\n");
        }
    }
    printf("\n\nResultant matrix C:\n");
    {
        for(i=0;i<m;i++)
        {
        for(j=0;j<q;j++)
            {
                printf("%4d",C[i][j]);
            }
            printf("\n");
        }
    }
}
