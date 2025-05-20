// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j;
    int A[3][4]= {
        {2,3,4,5},
        {12,23,34,54},
        {82,73,64,55}
    };
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}