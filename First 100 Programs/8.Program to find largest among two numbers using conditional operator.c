/*Program to find largest among two numbers using conditional operator*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter the First number ");
    scanf("%d",&a);
    printf("Enter the second number ");
    scanf("%d",&b);
    (a>b)?printf(" %d is Greater than %d ",a,b):printf("%d is Greater than %d ",b,a);;
    printf("Enter any key to exit... ");
    getch();

}