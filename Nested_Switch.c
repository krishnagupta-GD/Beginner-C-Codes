#include <stdio.h>

int main(){

    int num;

    printf("Enter any Number");
    scanf("%d",&num);

    switch(num>0)
    {
        case 1:
        printf("%d is Positive",num);
        break;

        case 0:

        switch(num<0)
        {
            case 1:
            printf("%d is Negative",num);
            break;

            case 0:
            printf("%d is zero",num);
            break;
        }
        break;
    }
    return 0;

}
