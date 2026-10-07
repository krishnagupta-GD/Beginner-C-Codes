#include <stdio.h>

int main(){

    int A[20][20],B[20][20],C[20][20],i,j,k,r1,c1,r2,c2,sum=0;

    printf("\n Multiplication of Two Matrices:\n");
    printf("````````````````````````````````\n");

    printf("\nInput Rows & Column of the First Matrix");
    scanf("%d %d", &r1, &c1);
    printf("\nInput Rows & Column of the Second Matrix");
    scanf("%d %d", &r2, &c2);

    if(c1!=r2)
    {
        printf("Multiplication is not possible As Rows and Column are not Same");
    }
    else
    {
        printf("Input Element in the First Matrix\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("Element -[%d][%d] :",i,j);
                scanf("%d",&A[i][j]);
            }
        }

        printf("Input the Element in the Second Matrix\n");
        
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("Element -[%d][%d] :",i,j);
                scanf("%d",&B[i][j]);
            }
        }

        printf("\nThe First Matrix is: ");

        for(i=0;i<r1;i++)
        {
            printf("\n");
            for(j=0;j<c1;j++)
            printf("%d",A[i][j]);
        }

        printf("\n The Second Matrix is: ");

        for(i=0;i<r2;i++)
        {
            printf("\n");
            for(j=0;j<c2;j++)
            printf("%d",B[i][j]);
        }

        //multiplication of the Matrix
        for(i=0;i<r1;i++)
        for(j=0;j<c2;j++)

        C[i][j]=0;

        for(i=0;i<r1;i++) //row of first matrix
        {
            for(j=0;j<c2;j++)
            {
                sum=0;
                for(k=0;k<c1;k++)
                sum=sum+A[i][j]*B[i][j];
                C[i][j]=sum;

            }
        }

        printf("\n the Multiplication of Two Matrices is :\n");
        for(i=0;i<r1;i++)
        {
            printf("\n");
            for(j=0;j<c2;j++)
            {
                printf("%d\t",C[i][j]);
            }
        }

    }
    printf("\n\n");

}