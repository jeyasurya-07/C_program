//basic if else prgrm-7
#include <stdio.h>

int main()
{
    int x,y,z;
    printf("Enter number:");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    y=(x%10)*10+y;
    x=x/10;
    z=x%10;
    x=(x/10)*10+z;
    if(x==y)
    printf("Success");
    else
    printf("Failure");

}