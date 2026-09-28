#include <stdio.h>

int main(){

    int i,j;
    for (i=0;i<9;i++){

        for (j=0;j<9;j++){

            if (j==1)
              goto next_i;
            printf("%d %d \n",i,j);
        
        }
        next_i:;
    }
    return 0;
}