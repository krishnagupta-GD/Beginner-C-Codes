#include <stdio.h>

int main(){
    int n,sum=0,i;
    printf("Enter the Value of n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d \n",i*i);
        sum=sum+i*i;

    }
    printf("Sum of Square of First Natural Number no is %d ",sum);
}