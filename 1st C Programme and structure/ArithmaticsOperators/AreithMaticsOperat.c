#include<stdio.h>
int main()
{
    int a,b;
    int sum,multi,sub;
    float division;
    Printf("Enter Two numbers");
    scanf("%d %d",&a,&b);
    sum = a+b;
    multi = a *b;
    sub = a - b;
    division =(float) a /b;
    printf("The sum of two num is %d",sum);
    printf("The multi of two num is %d",multi);
    printf("The sub of two num is %d",sub);
    printf("The division of two num is %f",division);
    return 0;
}