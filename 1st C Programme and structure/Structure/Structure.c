#include<stdio.h>
// This is main function
int main()

{
    // if we want declare a variable
    int a=10,b=5,c=15;
    int firstNum=15 , secondNum=25, result;
    // sum of two numbers
    result = firstNum + secondNum;
    //multi of two numbers
    int result2;
    result2 = firstNum * secondNum;
    // division of two numbers 
    float result3;
    result3 = firstNum / secondNum;
    //printf also a function where it tells show it in display
    printf("This is my first code in C \n");
    printf("Sum of 12 and 13 is : 25 \n");
    printf("sum of %d and %d is : %d \n", 12,13,25);
    printf("The sum of %d and %d = %d \n", a,b,c);
    printf("The sum of Two num is %d \n", result);
    printf("Multi of Two nums = %d \n", result2);
    printf("The division of two num is = %f", result3);
    return 0;
}