#include<stdio.h>
int main()
{
    // if we dont declare a variable we have to change 1 by 1 price .
    printf("The book price is 200 \n");
    printf("The book price is 200 \n");
    printf("The book price is 200 \n");
    printf("The book price is 200 \n");

    //if we need to change the value of price we only change the variable which we assigned
    int price= 500;
    printf("The book price is %d \n",price);
    printf("The book price is %d \n",price);
    printf("The book price is %d \n",price);
    printf("The book price is %d \n",price);

    int count =10;
    printf("the count is %d \n",count);
    int j,k;
     j =k  = count;
    printf("The num is %d \n",j);
    printf("the num is %d \n",k);
}