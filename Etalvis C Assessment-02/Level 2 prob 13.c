//get a 3 dig num if both dig 1 and dig 0 are same print 1 else 0
#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter Nmber:");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    x=x%10;
    y=(x==y);

    printf("Result = %d",y);
}