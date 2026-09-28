#include <stdio.h>

int main(){
int m1,m2,m3,m4,m5,per;
printf("enter the Marks of Five subjects out of 100");
scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

per=(m1+m2+m3+m4+m5)/5;

if(per >=60)
printf("First Division");

else if(per >=50)
printf("Second Division");

else if(per >=40)
printf("Third Division");

else
printf("Fail");

}