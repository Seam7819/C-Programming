#include<stdio.h>
int main ()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if(num>0)
        printf("This is positive number");
    if(num<0)
        printf("This is negetive number");
    return 0;
}