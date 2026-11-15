#include <stdio.h>

/* Function to swap two integers using pointers (call by reference) */
void swap(int *a, int *b)
{
    int temp;

    temp = *a;   /* store value pointed to by a */
    *a   = *b;   /* put b's value into a's location */
    *b   = temp; /* put saved value into b's location */
}

int main(void)
{
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("\nBefore swap: x = %d, y = %d\n", x, y);

    /* Pass addresses of x and y — this is call by reference */
    swap(&x, &y);

    printf("After  swap: x = %d, y = %d\n", x, y);

    return 0;
}