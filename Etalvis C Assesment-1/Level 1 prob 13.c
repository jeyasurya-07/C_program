#include  <stdio.h>

int main()
{
    int x=0,y=0,z=0;
    printf("Enter the number:");
    scanf("%d",&x);
    z=(x%10);
    y=z*100;
    x=x/10;
    z=x%10;
    y=y+(z*10);
    x=x/10;
    y=y+x;

    
    printf("Result=%d",y);
}
//reverse 3 digit number ip