/*Program to Interchange two numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter first number ");
    scanf("%d",&a);
    printf("Enter second number ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("The numbers %d and %d are interchanged into %d and %d \nEnter any Key to exit... ",b,a,a,b);
    getch();

}