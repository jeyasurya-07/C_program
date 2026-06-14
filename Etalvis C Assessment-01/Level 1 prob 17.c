#include  <stdio.h>

int main()
{
    int x=0,y=0,z=0;
    printf("Enter the number:");
    scanf("%d",&x);
    x=(x/10);
    y=(x*10)+2;
    
    printf("Result=%d",y);
}
//remove last digit and add 2 at the end of ip