#include<stdio.h>
#include<conio.h>
int main ()
{
    int row,space,star,totalrows;
    printf("Enter the number of row :");
    scanf("%d",&totalrows);
    for(row=0;row<=totalrows;row++){
        for(space=1;space<=(totalrows-row);space++){
            printf(" ");
        }
        for(star=1; star<=((2*row)-1);star++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}