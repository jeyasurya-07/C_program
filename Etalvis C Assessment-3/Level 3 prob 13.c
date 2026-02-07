//basic if else prgrm-13
#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter number:");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    x=x%10;
    if(x==y)
    printf("Success");
    else
    printf("Failure");

}