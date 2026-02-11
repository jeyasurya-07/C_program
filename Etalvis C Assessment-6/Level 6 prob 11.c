#include <stdio.h>

int main()
{
    int i,x,count=0;
    printf("Enter number :");
    scanf("%d",&x);
    while(x!=0)
    {
        count++;
        x=x/10;
    }
    printf("%d",count);
}