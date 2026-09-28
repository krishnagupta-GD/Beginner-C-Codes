#include <stdio.h>

int main(){

    char ch;
    printf("Enter any Character");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("'%c'is a Vovel",ch);
    }

    else if ((ch >='a' && ch <='z') || (ch >='A' && ch <='Z'))
    {
        printf("'%c'is a Consonant",ch);

    }
     else if (ch >='0' && ch <='9')
     {
        printf("'%c'is a Number",ch);
     }

    else
    {
        printf("'%c'is a Special Character",ch);
    }
    return 0;
}