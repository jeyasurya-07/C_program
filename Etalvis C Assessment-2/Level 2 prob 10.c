#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter Nmber:");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    y=(y>x);

    printf("Result = %d",y);
}