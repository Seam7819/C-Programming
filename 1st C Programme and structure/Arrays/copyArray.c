// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,arr1[5]={1,2,3,4,5},arr2[5];
    for(i=0;i<5;i++){
        printf("%d \n",arr1[i]);
    }
    for(i=0;i<5;i++){
        arr2[i]=arr1[i];
    }
    for(i=0;i<5;i++){
        printf("%d",arr2[i]);
    }
    return 0;
}