//make the center of 3 dig num as 0
#include  <stdio.h>

int main()
{
    int x=0,y=0,z=0,j=0,k=0;
    printf("Enter the number:");
    scanf("%d",&x);
    z=x%10;
    x=x/10;
    k=(x%10)*0;
    x=(x/10)*100;
    y=x+k+z;

    printf("Result=%d",y);
}