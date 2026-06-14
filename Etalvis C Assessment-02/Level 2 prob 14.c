//get a 4 dig if both dig0&1 and dig2&3 are same print 1 else 0
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