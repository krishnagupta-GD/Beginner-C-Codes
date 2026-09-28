#include <stdio.h>

int main(){

    int A[20],i,n,pos;

    printf("Enter the No of Elements");
    scanf("%d",&n);
    printf("Enter the Elements");

    for(i=0;i<n;i++)
    scanf("%d",&A[i]);

    printf("Enter the Positiopn of Element to Delete");
    scanf("%d",&pos);

    printf("Shift the element in Backward Direction");
    for(i=pos-1;i<n-1;i++)

    A[i]=A[i+1];
    n=n-1;

    printf("Array after deleting element:\n");
    for(i=0;i<n;i++)

    printf("%d \n",A[i]);
}