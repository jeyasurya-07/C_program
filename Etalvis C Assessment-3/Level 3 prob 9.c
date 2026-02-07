//basic if else prgrm-7
#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter number:");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    if(y<x)
    printf("Success");
    else
    printf("Failure");

}