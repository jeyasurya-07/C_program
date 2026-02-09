// check if num != 50
#include <stdio.h>

int main()
{
    int x,y=50;
    printf("Enter Nmber:");
    scanf("%d",&x);
    y=x!=y;

    printf("Result = %d",y);
}