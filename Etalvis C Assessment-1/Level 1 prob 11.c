#include  <stdio.h>

int main()
{
    int x=0,y=0,z=0;
    printf("Enter the number:");
    scanf("%d",&x);
    z=(x%10);
    y=y+z;
    x=(x/10);
    z=(x%10);
    y=y+z;
    x=(x/10);
    y=y+x;
    
    printf("Result=%d",y);
}
//print sum of digits of ip