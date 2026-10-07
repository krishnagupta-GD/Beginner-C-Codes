#include <stdio.h>

int main(){

    int A[50][50],B[50][50],C[50][50],i,j,n;

    printf("\n Addition of Two Matrix");
    printf("`````````````````````````````````````\n");

    printf("Input the size of the Square Matrix(Less than 5)");
    scanf("%d",&n);

    printf("Input the Element in the First Matrix");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Element -[%d][%d] : ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("Input the Element in the Second Matrix");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Element -[%d][%d] : ",i,j);
            scanf("%d",&B[i][j]);
        }
    }

    printf("\n The First Maxtrix is:\n");

    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        printf("%d\t",A[i][j]);
    }

    printf("\n The Second Matrix is:\n");

    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        printf("%d\t",B[i][j]);
    }

    /*Calculate The Sum*/

    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    C[i][j]=A[i][j]+B[i][j];

    printf("\nAddition of Two Matrix\n");

    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        printf("%d\t",C[i][j]);    
    }

    printf("\n\n");
}

