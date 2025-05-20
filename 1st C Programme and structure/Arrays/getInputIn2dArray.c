// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j;
    int A[3][4];
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d ",&A[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}