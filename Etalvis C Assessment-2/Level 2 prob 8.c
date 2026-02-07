//check if dig 1 != dig 0 then print 1
#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter Nmber:");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    y=x!=y;

    printf("Result = %d",y);
}