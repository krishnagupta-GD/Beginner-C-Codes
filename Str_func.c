#include <stdio.h>
#include <string.h>

int main(){
    char name[50];
    int l;

    printf("Enter Your Name :");
    gets(name);
    l=strlen(name);
    printf("Your Name Has %d Character's",l);

    return 0;
}