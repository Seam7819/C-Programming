#include<stdio.h>
#include<conio.h>
int main ()
{
    int num,i;
    for(;;){
        printf("Enter the intiger number : ");
        scanf("%d",&num);
        if(num==0){
            printf("The number is invalied");
        }
        for(i=1;i<=10;i++){
            printf("%2d x %2d = %2d \n", num, i, num*i);
    }
    }

    return 0;
}