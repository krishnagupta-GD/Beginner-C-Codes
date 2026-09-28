#include <stdio.h>

int main(){

    int bonus,cy,yoj,yr_service;
    printf("Enter the current year and year of joining");
    scanf("%d %d",&cy,&yoj);
    yr_service=cy-yoj;

    if(yr_service>3)
    {
        bonus=2500;
        printf("Bonus= Rs %d",bonus);
    }
    return 0;
}