#include <stdio.h>
#include <math.h>

int main()
{
    int i, originalNum, remainder, sum;

    printf("Armstrong numbers between 1 and 500 are:\n");

    for(i = 1; i <= 500; i++)
    {
        originalNum = i;
        sum         = 0;

        while(originalNum > 0)
        {
            remainder    = originalNum % 10;
            sum         += pow(remainder, 3);
            originalNum /= 10;
        }

        if(sum == i)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}