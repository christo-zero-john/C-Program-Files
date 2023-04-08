/*Program to find simple Interest
formulae = SI=PNR/100*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int p,n,r;
    float simpleInterest;
    
    printf("Enter principle amount ");
    scanf("%d",&p);
    printf("Enter Number of years ");
    scanf("%d",&n);
    printf("Enter rate of interest ");
    scanf("%d",&r);
    simpleInterest=(p*n*r)/100.00;
    printf("Simple interest is %f\nEnter any key to exit : : : ",simpleInterest);
    getch();

}