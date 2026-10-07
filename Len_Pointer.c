#include <stdio.h>

int main(){

    char str[10],*P;
    P=str;
    int len=0;

    printf("Enter String");
    gets(str);

    while((*P++)!='\0')
    len++;

    printf("Length of String = %d",len);

}