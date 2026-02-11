#include <stdio.h>
int main ()
{
    int x,y,sum=0;
    printf("Enter number:");
    scanf("%d",&x);
    while(x!=0)
    {
        y=x%10;
        sum=sum+y;
        x=x/10;
    }
    printf("%d",sum);
}