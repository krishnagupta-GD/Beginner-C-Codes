#include <stdio.h>

int main()
{
    char str1[50], str2[50];
    int i, j;


    /* Input two strings from user */
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);


    /* Move till the end of str1 */
    i=0;
    while(str1[i] != '\0')
    {
        i++;
    }

    j = 0;
    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    printf("Concatenated string = %s", str1);

    return 0;
}
