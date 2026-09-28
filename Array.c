#include <stdio.h>

int main(){

    int A[20],i,n,max,min;
    printf("Size of the Array");
    scanf("%d",&n);

    printf("Enter the elements in the array");
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    printf("%d\n",A[i]);

    max=A[0];
    min=A[0];

    for(i=1;i<n;i++)
    {
        if(max < A[i])
        max=A[i];

        if(min > A[i])
        min=A[i];
    }

    printf("Max = %d , Min = %d",max,min);

}