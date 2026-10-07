#include <stdio.h>

void add(int a, int b)
{printf("Addition of Two No's = %d",a+b);}

void sub(int a, int b)
{
    printf("Subtraction of two No's = %d",a-b);
}

void mul(int a, int b)
{
    printf("Multiplication of two No's = %d",a*b);
}

int main(){

    int (*P1[])(int,int)= add;
    int (*P1[])(int,int)= mul;
    int (*P1[])(int,int)= sub;

    int ch,a=10,b=15;

    printf("Enter Choice");
    scanf("%d",&ch);

    (*P1[ch])(a,b);
}