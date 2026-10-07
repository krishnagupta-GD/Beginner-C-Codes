#include <stdio.h>

int main(){

    char S1[10],S2[10],*P1,*P2;
    P1=S1;P2=S2;
    puts("Read String 1 : ");
    gets(S1);

    while(*(P2++)=*(P1++))
    {

    printf("Display Both Strings");

    printf("S1= %s \n S2= %s \n",S1,S2);

    }

}