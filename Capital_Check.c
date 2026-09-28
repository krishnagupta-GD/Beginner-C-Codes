#include <stdio.h>

int main() {

    char ch;
    printf("Enter any Character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is a Capital Letter", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a Small Letter", ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a Digit", ch);
    }
    else {
        printf(" %c is a Special Character", ch);
    }

    return 0;
}