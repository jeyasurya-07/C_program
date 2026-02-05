//rev a first two dig
#include  <stdio.h>

int main()
{
    int x=0,y=0,z=0,j=0,k=0;
    printf("Enter the number:");
    scanf("%d",&x);
    z=x%10;
    y=z;
    x=x/10;
    z=(x%10)*10;
    y=y+z;
    x=x/10;
    z=(x%10)*1000;
    x=(x/10)*100;
    y=x+y+z;

    printf("Result=%d",y);
}