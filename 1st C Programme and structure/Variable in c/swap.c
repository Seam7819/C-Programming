#include<stdio.h>
int main()
{
    int i,j,k;
    i =10;
    j=20;
    k=j;
    printf("The num of i  is %d \n",i);
    printf("the num of j  is %d \n",j);
    
    j=i;
    
    printf("The j is %d \n",j);
    i=k;
    printf("The i is %d \n",i);
}