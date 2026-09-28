#include <stdio.h>

int main(){
    int og,n,rem,rev=0;
    printf("enter the Number");
    scanf("%d",&og);
    n=og;

    while(n !=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(og==rev)
    printf("Original Number = %d is a palindiome",rev);

    else
    printf("Not a palindiome");

}