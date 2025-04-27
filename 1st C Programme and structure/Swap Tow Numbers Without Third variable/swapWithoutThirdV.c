#include<stdio.h>
#include<conio.h>
int main ()
{
    int firstNum, secondNum;
    

    
    
    scanf("%d",&firstNum);
    printf("first num is %d\n",firstNum);
    scanf("%d\n",&secondNum);
    printf("The second num is: %d\n",secondNum);
    
    firstNum= firstNum+secondNum;
    secondNum= firstNum - secondNum;
    firstNum = firstNum - secondNum;
    printf("After swap\n");
    printf("The first number is %d\n", firstNum);
    printf("The second number is %d",secondNum);
    
}


/*
x=10
y =20
x= x+y;
x=30;
y= x-y;
y=10;
x=x-y
x=20



*/