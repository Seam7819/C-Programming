#include<stdio.h>
int main ()
{
    int marks;
    printf("Enter the marks : ");
    scanf("%d",&marks);
    if(marks<0 || marks >100){
        printf("The number is Inavalied");
        return 0;
    }
    if(marks <=100 && marks >=80){
        printf("The grade is A+");
    }else if(marks < 80 && marks > 69){
        printf("The mark is A");
    }else if(marks < 70 && marks > 59){
        printf("The mark is A-");
    }else if(marks < 60 && marks > 49){
        printf("The mark is B");
    }else if(marks < 50 && marks > 39){
        printf("The mark is C");
    }else if(marks < 40 && marks > 32){
        printf("The mark is D");
    }else
    printf("Fail");
    return 0;
}