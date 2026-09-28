#include <stdio.h>

int main(){

    int i,n,flag=0;
    printf("Enter a Number:");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {flag=1;
        break;}
    }
    if (flag!=1)
    printf("%d is a Prime Number",n);

    else
    printf("%d is not a Prime Number",n);
}