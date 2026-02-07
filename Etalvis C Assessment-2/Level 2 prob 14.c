#include <stdio.h>

int main()
{
    int x,y,z;
    printf("Enter Nmber:");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    y=(x%10)*10+y;
    x=x/10;
    z=x%10;
    x=(x/10)*10+z;
    y=(x==y);

    printf("Result = %d",y);
}