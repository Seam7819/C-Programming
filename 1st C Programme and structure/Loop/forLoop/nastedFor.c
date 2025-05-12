#include<stdio.h>
#include<conio.h>
int main ()
{
    int cols,rows,i,j;
    printf("Enter the amount of rows :");
    scanf("%d",&rows);
    printf("Enter the amount of cols :");
    scanf("%d",&cols);

    for(i=1; i<=rows;i++){
        for(j=1;j<=cols;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}