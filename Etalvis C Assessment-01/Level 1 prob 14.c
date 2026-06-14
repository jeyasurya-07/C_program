#include  <stdio.h>

int main()
{
    int x=0,y=0,z=0;
    printf("Enter the number:");
    scanf("%d",&x);
    z=x%10;
    y=z*10;
    x=x/10;
    z=x%10;
    y=y+z;
    x=(x/10);
    y=(x*100)+y;
    
    printf("Result=%d",y);
}
//rev last 2 digits of 4 digit number ip