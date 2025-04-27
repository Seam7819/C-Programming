#include<stdio.h>
#include<conio.h>
int main()
{
    int bookId,quantity;
    float price;
    char name[50];
    char head;
    printf("ENter the values:");
    scanf("%d",&bookId);
    printf("Book Id is %d",bookId);
    scanf("%d",&quantity);
    printf("The quantity of book is %d",quantity);
    scanf("%f",&price);
    printf("The price of this book is %f",price);
    scanf("%s",name);
    printf("The name of the book is : %s",name);
}