#include <stdio.h>
#include <stdlib.h>

int main(){

    char str[50];
    int i = 0;

    printf("Input the String: ");
    fgets(str, sizeof str, stdin);
    
    printf("The Character of the Strings are: \n");

    while(str[i]!='\0')
    {
        printf("%c ",str[i]);
        i++;
    }

    printf("\n");

}