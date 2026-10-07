#include <stdio.h>

int sub(int a, int b)
{
    return(a-b);
}

void main(){

    int (*P)(int,int)=sub;

    int res=P(19,4);

    printf("%d",res);
}
