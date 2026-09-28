#include <stdio.h>
#define PI = 3.14

int main(){

    int r,d,a,p,C;
    
    printf("Enter the Radius");
    scanf("%d",&r);

    do
    {
        printf("Press 1 for Diameter\n");
        printf("Press 2 for Area\n");
        printf("Press 3 for Perimeter of Circle \n");
        printf("Enter ant for Exit");

        printf("Enter your Choice ");
        scanf("%d",&C);

        switch (C)
        {
            case 1: printf("Dia = %d",2*r);
            case 2: printf("Area = %d",P)
        }
    }
    
}