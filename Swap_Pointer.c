#include <stdio.h>

int swap(int *,int *);

int main(){

    int n1,n2;

    printf("Enter Two Numbers");
    scanf("%d %d",&n1,&n2);

    printf("Before Swapping n1 =%d \n",n1);
    printf("Before Swapping n2 =%d \n",n2);

    swap(&n1,&n2);//call

    printf("After Swapping n1 =%d and n2 =%d ",n1,n2);
}
    int swap(int *n1,int *n2)
    {
        int temp;
        temp=*n1;
        *n1=*n2;
        *n2=temp;
    }
