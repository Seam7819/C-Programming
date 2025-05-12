#include<stdio.h>
#include<conio.h>
int main ()
{
    int number,sum=0,reminder;
    printf("Enter a intiger number : ");
    scanf("%d",&number);
    while(number != 0){
        reminder = number % 10;
        sum = sum + reminder;
        number = number/10;
    }
    printf("The sum is %d",sum);

    return 0;
}