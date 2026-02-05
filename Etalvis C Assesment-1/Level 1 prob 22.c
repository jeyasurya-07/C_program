//add a 3 dig num and if < 10 print else add the sum of dig again and check
#include  <stdio.h>

int main()
{
    int x=0,y=0,z=0,j=0,k=0;
    printf("Enter the number:");
    scanf("%d",&x);
    y=x%10;
    z=z+y;
    x=x/10;
    y=x%10;
    z=z+y;
    x=x/10;
    z=z+x;
    y=z%10;
    k=k+y;
    y=z/10;
    z=k+y;
    y=z%10;
    j=j+y;
    z=z/10;
    y=j+z;


    printf("Result=%d",y);
}