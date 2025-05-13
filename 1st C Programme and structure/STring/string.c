#include<stdio.h>
#include<conio.h>
int main ()
{
    char str[20];
    printf("Getting string using scanf :");
    scanf("%[^\n]s",str);
    printf("%s",str);
    return 0;
}