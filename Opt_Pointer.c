#include <stdio.h>

int main(){

    float n1,n2,a,s,d,m,*p1,*p2;

    p1=&n1;
    p2=&n2;

    printf("Enter Two Numbers :");
    scanf("%f %f",p1,p2);

    a=(*p1) + (*p2);
    s=(*p1) - (*p2);
    m=(*p1) * (*p2);
    d=(*p1) / (*p2);

    printf("Addition of %.2f and %.2f is %.2f\n",*p1,*p2,a);
    printf("Subtraction of %.2f and %.2f is %.2f\n",*p1,*p2,s);
    printf("Multiplication of %.2f and %.2f is %.2f\n",*p1,*p2,m);
    printf("Division of %.2f and %.2f is %.2f\n",*p1,*p2,d);    

    return 0;
}