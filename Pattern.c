/*#include <stdio.h>

int main()
{
    int i, j, rows;

    printf("Enter number of rows : ");
    scanf("%d", &rows);

    // PATTERN 1 - Stars
    printf("\nPattern 1 - Stars:\n");
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    // PATTERN 2 - Numbers
    printf("\nPattern 2 - Numbers:\n");
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }

    // PATTERN 3 - Inverted Numbers
    printf("\nPattern 3 - Inverted Numbers:\n");
    for(i = rows; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
            printf("%d", i);
        printf("\n");
    }

    // PATTERN 4 - Alphabets
    printf("\nPattern 4 - Alphabets:\n");
    for(i = 1; i <= rows; i++)
    {
        for(j = 0; j < i; j++)
            printf("%c", 'A' + j);
        printf("\n");
    }

    return 0;
}*/

#include <stdio.h>

int main()
{
    int i, j, rows = 5;

    // PATTERN 1 - Stars
    printf("Pattern 1 - Stars:\n");
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    // PATTERN 2 - Numbers
    printf("\nPattern 2 - Numbers:\n");
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }

    // PATTERN 3 - Inverted Numbers
    printf("\nPattern 3 - Inverted Numbers:\n");
    for(i = rows; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
            printf("%d", i);
        printf("\n");
    }

    // PATTERN 4 - Alphabets
    printf("\nPattern 4 - Alphabets:\n");
    for(i = 1; i <= rows; i++)
    {
        for(j = 0; j < i; j++)
            printf("%c", 'A' + j);
        printf("\n");
    }

    return 0;
}
