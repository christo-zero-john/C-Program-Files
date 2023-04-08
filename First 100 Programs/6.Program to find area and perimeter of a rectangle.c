/*Program to find area and perimeter of a rectangle*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int l,b,area,perimeter;
    printf("Enter Length of the Rectangle ");
    scanf("%d",&l);
    printf("Enter Breadth of the Rectangle ");
    scanf("%d",&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("The Area of the Rectangle is %d\nThe Perimeter of the rectangle is %d \nEnter any key to Exit...",area,perimeter);
    getch();
}