#include <stdio.h>

double trianlgeArea(double b, double h){
    return 0.5*b*h;
}

int main() {
    double base,height,result;
    printf("Enter the base and height :");
    scanf("%lf %lf",&base, &height);
    result = trianlgeArea(base,height);
    printf("The area of triangle is %lf",result);
    return 0;
}