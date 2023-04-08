/*program to find area of a circle*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int r;
    float area;
    printf("Enter the Radius of the circle ");
    scanf("%d",&r);
    area=3.14*(r*r);
    printf("Area of the circle = %f\nEnter any key to exit... ",area);
    getch();
}