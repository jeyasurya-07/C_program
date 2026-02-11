#include <stdio.h>
int main ()
{
    int x,y,rev=0;
    printf("Enter number:");
    scanf("%d",&x);
    while(x!=0)
    {
        y=x%10;
        rev=(rev*10)+y;
        x=x/10;
    }
    printf("%d",rev);
}