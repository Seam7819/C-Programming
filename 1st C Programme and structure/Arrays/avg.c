// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,sum=0,n,num[100];
    float avg;
    printf("Enter the number of any from 1 to 100 : \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++){
        sum= sum+num[i];
        avg = (float)sum / n;
    }
    printf(" The avg is : %.2f",avg);
    return 0;
}