// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,n,num[100];
    printf("How many num you want to compare : \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d \n",&num[i]);
    }
    int max=num[0];
    for(i=1;i<n;i++){
        if(max<num[i])
        max=num[i];
    }
    printf("The leargest number is %d",max);
    
    return 0;
}