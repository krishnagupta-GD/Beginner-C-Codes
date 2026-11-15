#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius : ");
    scanf("%f", &celsius);

    /* Formula: F = (C × 9/5) + 32 */
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}