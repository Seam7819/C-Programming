#include <stdio.h>

int fact(int n){
    if(n==1)
        return 1;
    else
    return n*fact(n-1);

}

int main() {
    int result,n;
    printf("Enter an intiger num :");
    scanf("%d",&n);
    result= fact(n);
    printf("Factorial of the num is %d",result);
    
    return 0;
}