//if both 1st and last digit of 3 digit num is odd then sub 5
#include  <stdio.h>

int main()
{
    int x=0,y=0,z=0;
    printf("Enter the number:");
    scanf("%d",&x);
    z=x%10;
    z=z%2;
    y=x/100;
    y=y%2;
    y=x-(z*y*5);   
    printf("Result=%d",y);
}