#include <stdio.h> 

void main(){
    int A[]={10,20,30,40};
    int i,*P[4];

    printf("Enter the Value in Array of Pointer's");

    for(i=0;i<4;i++)

    P[i]=&A[i];

    printf("Display the Element/Address of Array of Pointer");

    for(i=0;i<4;i++)

    printf("Value of A[%d]= %d and Its Address =%d \n",i,A[i],*P[i]);


}