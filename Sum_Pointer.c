#include <stdio.h>

int main(){

    int *P,A[10],i,n,sum=0;

    printf("Enter the Size of the Array");
    scanf("%d",&n);

    P=&A[0];
    
    printf("Read the Array");

    for(i=0;i<n;i++)
    {scanf("%d",P+i);
    sum=sum+*(P+i);
    }

    printf("Sum of Array = %d ",sum);
}