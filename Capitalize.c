#include <stdio.h>

int main()
{
    char str[50];
    int i;

    /* Input string from user */
    printf("Enter your text : ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        /*
         * If current character is lowercase alphabet then
         * convert it to uppercase.
         */
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
    }


    printf("Uppercase string : %s",str);
    return 0;
}
