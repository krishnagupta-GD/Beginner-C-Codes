#include <stdio.h>

int main(){
    int A[3][3],i,j;
    printf("\n \n Read a 2D Array of size 3x3 and print Matrix \n \n");

    printf("\nInput the values for the Matrix\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Element -[%d][%d] :",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    
    printf("\nThe Matrix is : \n");
    
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t",A[i][j]);
    }

    printf("\n \n");
}   