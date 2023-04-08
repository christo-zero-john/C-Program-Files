/*Program to check whether a number is even or odd using Conditional Operator*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter any number ");
    scanf("%d",&a);
    (a%2==0)?printf("%d is Even\n",a):printf("%d is odd \n",a);
    printf("Press any key to exit... ");
    getch();
}