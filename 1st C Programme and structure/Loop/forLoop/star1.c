#include<stdio.h>
#include<conio.h>
int main ()
{
    int rows,cols,totalrow;
    printf("Enter the rows : ");
    scanf("%d",&totalrow);
    for(rows =1; rows<=totalrow;rows++){
        for(cols=1; cols<=rows;cols++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}