/*Program to find sum and average of 4 numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,sum,average;
    printf("Enter first number ");
    scanf("%d",&a);
    printf("Enter second number ");
    scanf("%d",&b);
    printf("Enter third number ");
    scanf("%d",&c);
    printf("Enter fourth number ");
    scanf("%d",&d);
    sum=a+b+c+d;
    average=sum/2;
    printf("The sum is %d \nThe average is %d \n",sum,average);
    printf("Enter any key to exit ");
    getch();
}