#include<stdio.h>
#include<conio.h>
int main ()
{
    int rows,cols,totalrow;
    printf("Enter the rows : ");
    scanf("%d",&totalrow);
    for(rows =1; rows<=totalrow-1;rows++){
        for(cols=1; cols<=rows;cols++){
            printf("*");
        }
        printf("\n");
    }
    for(rows =totalrow; rows>=0;rows--){
        for(cols=1; cols<=rows;cols++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}