#include <stdio.h>
#include <math.h>

int main(){

    int a,b,c;
    printf("Enter the base Number\n");
    scanf("%d",&a);
    printf("Enter the Exponent\n");
    scanf("%d",&b);
    c=pow(a,b);
    printf("It is %d",c);

    return 0;
    
}