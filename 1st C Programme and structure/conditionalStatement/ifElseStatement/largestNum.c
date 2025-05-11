#include<stdio.h>
int main ()
{
    int num1,num2;
    printf("Enter the first number");
    scanf("%d",&num1);
    printf("Enter the second number");
    scanf("%d",&num2);
    if(num1>num2){
        printf("First number is largest");
    }else {
        printf("second number is largest");
    }
    return 0;
}