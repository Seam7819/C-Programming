// Online C compiler to run C program online
#include <stdio.h>

int square(int a){
    return a*a;
}

int main() {
    int num;
    printf("Enter any intiger number :");
    scanf("%d",&num);
    int result = square(num);
    printf("The squre of this number is : %d",result);
    return 0;
}