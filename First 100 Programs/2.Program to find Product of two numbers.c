/*Program to find Product of two numbers */
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,product;
    printf("Enter First number ");
    scanf("%d",&a);
    printf("Enter Second number ");
    scanf("%d",&b);
    product= a*b;
    printf("The product is %d\nPress any key to exit",product);
    getch();
}