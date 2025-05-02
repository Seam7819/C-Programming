#include <stdio.h>
int main()
{
    char upper_ch,lower_ch;
    printf("Enter a upper letter");
    scanf("%c",&upper_ch);
    lower_ch = upper_ch+32;
    printf("The lower letter is %c",lower_ch);
    printf("ENter a lower letter");
    scanf("%c",&lower_ch);
    upper_ch = lower_ch-32;
    printf("the upper letter is %c",upper_ch);
}